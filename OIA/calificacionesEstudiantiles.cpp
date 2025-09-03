#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct datos
{
    string NombreApellido;
    int Notas;
};

vector<datos> Alumnos;

void pedirDatos()
{
    for(int i=0; i<10; i++)
    {

        string nym="";
        int nota=0;
        cout << "Ingrese el nombre y apellido del alumno"<<endl;
        getline(cin, nym);
        struct datos newAlumno;

        newAlumno.NombreApellido = nym;
        while(true)
        {
            cout << "Ingrese la nota"<<endl;
            cin >> nota;
            cin.ignore();

            if(nota >= 0 && nota <= 10)
            {
                newAlumno.Notas = nota;

                Alumnos.push_back(newAlumno);
                break;

            }
            else
            {
                cout <<"Nota invalida" << endl;
            }
        }
    }
}

struct datos ObtenerNotaAlta()
{
    struct datos AlumMasAlta= Alumnos[0];
    for(int i=0; i<10; i++)
    {
    if(Alumnos[i].Notas>=AlumMasAlta.Notas){
        AlumMasAlta= Alumnos[i];
    }
    }
    return AlumMasAlta;
};

struct datos ObtenerNotaBaja()
{
    struct datos AlumMasBaja = Alumnos[0];
    for(int i=0; i<10; i++)
    {
    if(Alumnos[i].Notas<=AlumMasBaja.Notas){
        AlumMasBaja= Alumnos[i];
    }
    }
    return AlumMasBaja;
};

int ObtenerProm()
{
    int prom=0;
    for(int i=0; i<10; i++)
    {
        prom += Alumnos[i].Notas;
    }
    return prom/10;
};


int main()
{

    pedirDatos();
    struct datos AlumAlta;
    struct datos AlumBaja;
    AlumAlta = ObtenerNotaAlta();
    AlumBaja = ObtenerNotaBaja();

    cout << "El alumno " << AlumAlta.NombreApellido << "tiene la nota mas alta con " <<AlumAlta.Notas<<" puntos " << endl;
    cout << "El alumno " << AlumBaja.NombreApellido << "tiene la nota mas baja con " <<AlumBaja.Notas<<" puntos " << endl;
    cout << "El promedio es de " << ObtenerProm() <<endl;
    return 0;
}
