#include <bits/stdc++.h>

using namespace std;

int main() {
	string number;
	cout << "ingrese el numero con decimal y punto(.) : ";
	cin >> number;
	int caracter;

	for (int i; i < number.size(); i++) {
		if (number[i] == '.' || number[i] == ',') {
			caracter = i;
		}
	}
	for (int i = caracter - 1;i < number.size() - caracter;i++) {
		cout << number[i];
		cout << "for recorrido" << i << "veces" << endl;
	}
	cout << "numero ingresado:" << number;
	cout << "caracter numero donde está el ." << caracter;

	cout << "numero en la posicion de ." << number[caracter-1];

}