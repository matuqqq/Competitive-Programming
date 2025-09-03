#include <bits/stdc++.h>

using namespace std;

void Resolvente(int a, int b, int c) {
	cout << "raiz 1: " << (-b + (sqrt(((b * b) - (4 * a * c))))) / (2 * a) << endl;
	cout << "raiz 2: " << (-b - (sqrt(((b * b) - (4 * a * c))))) / (2 * a);
}

int main() {
	cout << "--- bienvenido a formula cuadratica --- ";
	cout << endl << "ingrese a (x^2): ";
	int x2 = 0;
	cin >> x2;

	cout << endl << "ingrese b (x): ";
	int x = 0;
	cin >> x;

	cout << endl << "ingrese c (c): ";
	int independiente = 0;
	cin >> independiente;

	Resolvente(x2, x, independiente);
}