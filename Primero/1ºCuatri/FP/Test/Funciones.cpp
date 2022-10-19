#include <iostream>
using namespace std;


double suma (double a, double b){
	double s;
	s=a+b;
	return s; 
}




int main(){
	double resultado;
	double p,q;
	cin >> p;
	cin >> q;
	resultado = suma(p,q);
	cout << resultado;
	return 0;
}
