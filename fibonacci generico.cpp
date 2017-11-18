#include <iostream>
using namespace std;

//pre = 0 <= n <= long(v)
//post max = max k, w: 0<= k <= w < n: fib(w, k)
//fib(k,w) = sum k, w: 2 <= w <= k < n: v[k] = v[k-1] + v[k-2]

int fib(int v[], int n){
	int cont = 2, suma = 0, max = 2;

	if (n == 1)
		return 1;

	for (int i = n - 1; i > 1; i--)
	{
		suma = v[i - 1] + v[i - 2];

		if (suma == v[i]){
			cont++;
			if (cont > max)
				max = cont;
		}
		else{
			cont = 2;
		}
	}

	return max;
}

bool resuelve(){
	int v[100000], n;

	cin >> n;

	if (n == 0)
		return false;

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	cout << fib(v,n) << endl;

	return true;
}

int main(){


	while (resuelve());

	return 0;
}