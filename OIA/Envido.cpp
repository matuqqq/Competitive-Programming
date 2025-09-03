#include <bits/stdc++.h>

using namespace std;

int envido (int numero1, string palo1,int numero2, string palo2, int numero3, string palo3){
    int valorEnvido=0;
    int numeros[3]={numero1,numero2,numero3};
    string palos[3]={palo1,palo2,palo3}
    if(palo1 == palo2 ){
        valorEnvido+=20;
        if(palo1<10){
            valorEnvido+=numero1;
        }
        if(palo2<10){
            valorEnvido+=numero2;
        }
    }
    if(palo2 == palo3 ){
        valorEnvido+=20;
        if(palo2<10){
            valorEnvido+=numero2;
        }
        if(palo3<10){
            valorEnvido+=numero3;
        }
    }
    if(palo3 == palo1 ){
        valorEnvido+=20;
        if(palo3<10){
            valorEnvido+=numero3;
        }
        if(palo1<10){
            valorEnvido+=numero1;
        }
    }

    return valorEnvido; 
}

void pedirDatos(int numeros[3],string palos[3]){
    string dato;
    int espacio;
    cout << "ingrese el valor de la primera carta (formato: num <oros>, <copas>,<espadas>, <bastos> )"<< endl;
    cin >> dato;
    for(int i=0;i<dato;i++){
        if(dato[i]==" "){ espacio=i};
    }
    string numero = substr(espacio+1,espacio);
    stoi(numero);
}

int main(){
int numeros[3];
string palos[3];
    pedirDatos(numeros,palos);

}