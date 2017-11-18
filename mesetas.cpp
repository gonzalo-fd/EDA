#include <iostream>
using namespace std;
//pre= 0<= n <= long(v)
//post = forall w, k: 0<= w <= k < n: v[w] = v[k] ^ max(w, k): ini = w && fin=k 
//proc(int v[],int n, int &ini, int &fin) return ini && fin
//max = forall x, z: 0 <= x <= z < n: (z-x) <(w-k) 
void seg(int v[],int n, int &ini, int &fin){
	int max = 0, iniAux = 0, finAux = 0, nAux = 0, tamanio = 0;
	bool encontrado = true;
	for (int i = 1; i < n; i++)
	{

		if (v[i - 1] == v[i]){
			if (encontrado){
				iniAux = i - 1;
				encontrado = false;
			}
			finAux = i;
			tamanio = finAux - iniAux;
			if (tamanio > max){
				max = tamanio;
				ini = iniAux;
				fin = finAux;
			}
		}
		else{
			encontrado = true;
			finAux = i - 1;
		}
		
	}
}
bool resuelve(){
	int n, v[100000], ini = 0, fin = 0;

	cin >> n;

	if (n == 0)
		return false;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		
	}
	seg(v, n, ini, fin);
	cout << ini << ' ' << fin << endl;
	return true;
}
int main(){

	while (resuelve());
	return 0;
}