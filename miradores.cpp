#include <iostream>
using namespace std;
//pre= {o <= n <= long(v) && forall k; 0 <= k < n : v[k] >=0}
//post = forall w : sum w: 0 <= w <n: mirador(w)
// mirador = forall q: w <= q < n: v[q] < v[w]
// C = n -i
//I 0 <= i < n and forall w : sum w: 0 <= w <n: mirador(w) and  mirador = forall q: w <= q < n: v[q] < v[w]
int mirador(int n, int v[]){
	int suma = 0, mayor = 0;

	for (int i = n - 1; i >= 0; i--){
		if (v[i] > mayor){
			suma += v[i];
			mayor = v[i];
		}
	}
	return suma;
}

bool resuelve(){

	int n, v[100000];

	cin >> n;

	if (n == 0)
		return false;

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	cout << mirador(n, v) << endl;
	return true;
}

int main(){

	while (resuelve())
	{
	};
	return 0;
}