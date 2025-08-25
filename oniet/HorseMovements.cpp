#include <bits/stdc++.h>

using namespace std;

bool isInside(int x,int y){
if(x>=0 && y>=0 && x<8 && y<8 ) {
    return true;
}
else {return false;}
}
void printTable(string tablero[8][8]){
    for (int i=0;i<8; i++){
                for (int j=0;j<8; j++){
cout << tablero[j][i];
                }
        cout << ""<<endl;
    }
}
int main (){
    int x=0;
    int y=0;
    string tablero[8][8];
    cout << "Ingrese las coordenadas del caballo: "<< endl;
    cout << "columna: "<< endl;
    cin >> x;
    x = x-1;
    if(!isInside(x,3)) {cout << "fuera de tablero" ; return 0;}
    cout << "fila: "<< endl;
    cin >> y;
    y=y-1;
    if(!isInside(x,y)) {cout << "fuera de tablero" ; return 0;}

    for (int i=0;i<8; i++){
        for (int j=0;j<8; j++){
        tablero[j][i] = "|_| ";
        }   
    }


    tablero[x][y]="|c| ";
    if(isInside(x-1,y-2)){
            tablero[x-1][y-2]="|p| ";
        } if(isInside(x-1,y+2)){
            tablero[x-1][y+2]="|p| ";
        } if(isInside(x+1,y+2)){
            tablero[x+1][y+2]="|p| ";
        } if(isInside(x+1,y-2)){
            tablero[x+1][y-2]="|p| ";
        } if(isInside(x+2,y-1)){
            tablero[x+2][y-1]="|p| ";
        } if(isInside(x+2,y+1)){
            tablero[x+2][y+1]="|p| ";
        } if(isInside(x-2,y-1)){
            tablero[x-2][y-1]="|p| ";
        } if(isInside(x-2,y+1)){
            tablero[x-2][y+1]="|p| ";
        }
    printTable(tablero);
}