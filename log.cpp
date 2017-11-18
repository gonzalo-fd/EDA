#include <iostream>
using namespace std;

int pot(int base, int pot){
	int potencia = 1;
	if (pot == 0){
		return 1;
	}
	for (int i = 0; i < pot; i++)
	{
		potencia *= base;
	}

	return  potencia;
}

int log(int base, int num){
	int poti = 0;

	while ((pot(base, poti) > num) || (pot(base, poti + 1) <= num)){
		poti++;
	}

	return poti;
}

int main(){

	int n, base = 0, num = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> base;
		cin >> num;
		cout << log(base, num) << endl;

	}
	system("pause");
	return 0;
}


