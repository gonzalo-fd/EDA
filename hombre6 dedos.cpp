#include <iostream>

using namespace std;

int max(int r, int n){
	int max = 0; 
	if (r < n)
		max = n;
	else
		max = r;
	return max;
}
int segmax(int v[], int n, int p){
	int r = 1, i = 0, j = 1;
	while (j < n){
			while (v[j] - v[i] >= p)
				++i;
		r = max(r, j - i+1);
		++j;
	}
		
	return r;
}

bool resuelve(){
	int nac, anho;
	int v[10000];

	cin >> nac;
	cin >> anho;

	for (int i = 0; i < nac; i++){
		cin >> v[i];
	}

	if (nac == 0 && anho == 0) return false;
	int seg = segmax(v, nac, anho);
	cout << seg << endl;
	return false;
}
int main(){
	
	while (resuelve()){

	}
	return 0;
}