#include<iostream>

using namespace std;

//0 <= n < long(v)	  
//Invariant 0 <= n < long(v)  and  (forall w: 0 <=w <n aux >v[w] and exist w: 0 <= w < n aux = w and cont = #sumatorio w: 0 <=k < n
//coste O(n)
//cota n-i
int abadias(int v[], int n){
	int cont=0 , aux =0;
	for (int i = n-1; i >=0; i--){
		if(v[i] > aux){ 
			aux = v[i];
			++cont;
		}
	}
	return cont;
}
//(forall w: 0 <=w <n aux >v[w] and exist w: 0 <= w < n aux = w and cont = #sumatorio w: 0 <=k < n

bool resuelve(){
   int n;
	int V[100000];

	cin >> n;
	if (n == 0){
		return false;
	}
	for (int i = 0; i < n; i++){
		cin >> V[i];
	}
	cout << abadias(V, n) << endl;
	return true;
}



int main(){

	while (resuelve()){
	}


	return 0;
}