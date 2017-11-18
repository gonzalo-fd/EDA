#include<iostream>

using namespace std;
//p={ 0<= n <= long(v)}
//I={1<= n && inter+interImpar <= n-2 && 1 <=i < n-1}
//Cota n - i - 1

void fun(int v[], int n, int &inter, int &interimpar){
	for (int i = 1; i < n - 1; i++){
		if (v[i - 1] % 2 == 0 && v[i + 1] % 2 == 0){
			inter++;
		}
		if (v[i - 1] % 2 == 1 && v[i + 1] % 2 == 1){
			interimpar++;
		}
	}
}
//Q={(inter = #w : 1 <= w < n : v[w- 1] % 2 == 0 && v[w+ 1] % 2 == 0 ) && (interImpar = #w´ : 1 <= w < n : v[w´- 1] % 2 == 1 && v[w´+ 1] % 2 == 1 }
bool resuelve(){
	int n, inter = 0, interimpar = 0;
	int v[10000];
	cin >> n;

	if (n == 0)	return false;

	for (int i = 0; i < n; i++){
		cin >> v[i];
	}
	fun(v, n, inter, interimpar);
	cout << inter << ' ' << interimpar << endl;

	return true;
}
int main(){

	while (resuelve()){}
	return 0;
}