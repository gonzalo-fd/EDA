/*#include <iostream>
using namespace std;

//pre 0 <= n < long(V)

//post int pares(int V[], int n) return cont
//(#W: 0<= W <n: V[W]%2 = 0) = cont
int pares(int V[], int n){
	int cont = 0;

	for (int i = 0; i < n; ++i){
		if (V[i] % 2 == 0){
			cont++;
		}
	}
	return cont;
}

bool resuelve(){

	int n;
	int V[10000];

	cin >> n;
	if (n == 0){
		return false;
	}
	for (int i = 0; i < n; ++i){
		cin >> V[i];
	}
	cout << pares(V, n) << endl;
	return true;
}



int main(){

	while (resuelve()){
	}

	return 0;
}*/