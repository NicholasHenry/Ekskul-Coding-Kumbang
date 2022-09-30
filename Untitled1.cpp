#include <iostream>

using namespace std;
int main (){
	int p,l,L;
	 
	cout << "------------------------------------ \n";
	cout << "PROGRAM MENCARI LUAS PERSEGI PANJANG \n";
	cout << "------------------------------------ \n\n";
	
	cout << "Masukan panjang dan lebar dari persegi panjang \n";
	cout << "Panjang: ";
	cin >> p;
	cout << "Lebar  : ";
	cin >> l;
	cout << "\n";
	
	L= p*l;
	
	cout <<"Luas = Panjang x lebar \n";
	cout <<"     = " << p << " x " << l <<endl;
	cout <<"     = " << L;
	
	
	
	
	return 0;
}
