#include <iostream>
 using namespace std;

int main()
{
	int cantAlu = 10;
	cout << "ingrese la cantidad de alumnos totales: ";
	cin >> cantAlu;
	double promTotal = 0;
	cout << "ingrese el promedio total: ";
	cin >> promTotal;
	int cantAluReprobados;
	cout << "ingrese la cantidad de alumnos Reprobados: ";
	cin >> cantAluReprobados;
	double notasAluReprobados[cantAluReprobados];
	double SumNotasTotal = 0;
	double SumNotasDesaprobados = 0;
	for (int i = 0; i < cantAluReprobados; i++) {
		cout << "Ingrese la nota del alumno" << i + 1 << ":" << endl;
		double dato = 0;
		cin >> dato;
		while (dato > 4) {
			cout << "Vuelve a ingresar la nota desaprobada" << endl;
			cin >> dato;
		}
			notasAluReprobados[i] = dato;
			SumNotasDesaprobados += dato;
		
	}
	double SumNotasAluAprobados = ((promTotal * cantAlu) - SumNotasDesaprobados);
	int cantAlumnosAprobados = cantAlu - cantAluReprobados;
	double promedioAprobados = SumNotasAluAprobados/cantAlumnosAprobados;
	
	cout << "el promedio de los aprobados es de " << promedioAprobados;

}
