#include<iostream>

using namespace std;


bool ordenado(int v[], int ini, int fin, int &max,int &min){
	int  maximoIzq = 0, maximoDer= 0, minimoIzq, minimoDer;
	if (fin == ini){
			max = v[fin];
			min = v[fin];
			return true;
		}
	else{
		int mitad = (fin + ini) / 2;
		if (ordenado(v, mitad+1, fin, maximoDer, minimoDer) && ordenado(v, ini, mitad, maximoIzq ,minimoIzq)){
			if (maximoDer >= maximoIzq && minimoDer >= minimoIzq){
				max = maximoDer;
				min = minimoIzq;
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
}
		

bool resuelve(){
	int v[100000], n, cont = 0, max = 0;
	cin >> n;

	if (n == 0)
		return false;
	else{
		while (n != 0){
			v[cont] = n;
			cont++;
			cin >> n;
		}

		if (ordenado(v, 0, cont - 1, max, max))
			cout << "SI" << endl;
		else
			cout << "NO" << endl;
	}
	return true;
}
int main(){
	while (resuelve());
	return 0;
}