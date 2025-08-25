#include <bits/stdc++.h>
using namespace std;

int main() {
    int size = 0;
    cout << "Defina el tamaño de su matriz(x) (x * x): ";
    cin >> size;
    int v1[size][size];
    int v2[size][size];
    int cont = 0;
    for (int i = 0;i < size;i++) {
        for (int j = 0;j < size;j++) {
            cont++;
            cout << "Envie el caracter" << cont << "del vector 1" << endl;
            cin >> v1[i][j];
        }
    }
    cont = 0;
    for (int i = 0;i < size;i++) {
        for (int j = 0;j < size;j++) {
            cont++;
            cout << "Envie el caracter" << cont << "del vector 2" << endl;
            cin >> v2[i][j];
        }
    }
    cout << "Resultado: " << endl;

    for (int i = 0;i < size;i++) {
        for (int j = 0;j < size;j++)
        {
            cout << v1[i][j] + v2[i][j] << " ";
        }
        cout << "" << endl;
    }

    return 0;
}