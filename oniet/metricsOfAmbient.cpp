#include  <bits/stdc++.h>

using namespace std;

void mayor(double vec[24], string tipo) {
    double mas = vec[0];
	int hora = 0;
    for (int i = 1;i < 24;i++) {
        if (vec[i] > mas) { mas = vec[i]; hora = i; }
    }
    cout << "el mayor de "<< tipo << "es: "<< mas << "a la hora" << hora << endl;

}

void menor(double vec[24], string tipo) {
    double menos = vec[0];
    int hora = 0;
    for (int i = 1;i < 24;i++) {
        if (vec[i] < menos) { menos = vec[i]; hora = i; }
    }
    cout << "el menor de " << tipo << "es: " << menos << "a la hora"<< hora << endl;
}

void prom(double vec[24], string tipo) {
    double suma = 0;
        for (int i = 0;i < 24;i++) {
            suma += vec[i];
        }
        cout << "el promedio de " << tipo << "es: " << (suma / 24);
    ;
}

void datos(string tipo, double vecDatos[24]) {
    for (int i =0 ; i < 24 ; i++) {
        cout << "ingrese el dato para " << tipo << " la hora" << i << endl;
        cin >> vecDatos[i];
    }
}

void mostrar(double vec[24], string tipo) {
	prom(vec, tipo);
    mayor(vec, tipo);
	menor(vec, tipo);
}


int main() {


    cout << "bienvenido al sistema de medicion de tatata" << endl << endl;
    double humedad[24];
    datos("humedad", humedad);
    double temperatura[24];
    datos("temperatura", temperatura);
    double presion[24];
    datos("presion", presion);
    double precipitaciones[24];
    datos("precipitaciones", precipitaciones);
    mostrar(humedad, "humedad");
    mostrar(temperatura, "temperatura");
    mostrar(presion, "presion");
    mostrar(precipitaciones, "precipitaciones");

}