#include <bits/stdc++.h>

using namespace std

void ResFinal(int partPolitico, int cantVotos, cantVotosTotales) {
	cout << " -------------  Estadisticas del partido " partPolitico << " -------------  " << endl;
	cout << "cantidad de votos: " cantVotos << endl;
	cout << "porcentaje sobre el total: " << (cantVotos / cantVotosTotales) * 100 << endl;
}
double promedioPunto2() {

}


double CalcularDesviacion(double promedioPunto2, double valordelatabla) {
	return (valordelatabla-promedioPunto2)
}

int main() {
	int Seccional = 8; //(cant)
	int partidoPolitico = 6;
	int NumeroMesa = 10;
	int totalCantVotos = 0;
	int resultado[Seccional][partidoPolitico][NumeroMesa]
	int cantVotos[Seccional][partidoPolitico][NumeroMesa]
		for (int i = 0;i < Seccional;i++) {
			for (int j = 0;j < partidoPolitico;j++) {
				for (int k = 0;k < NumeroMesa;k++) {
					cout << "ingrese el resultado del numero de mesa" << endl << k << "del partido politico " << endl << j << "de la seccional " << endl << i
					cin >> resultado[i][j][k];
					
					cout << "ingrese la cantidad de votos"<<endl;
					cin >> cantVotos[i][j][k];
					totalCantVotos += cantVotos[i][j][k];
				}
			}
		}

	int totalVotosSeccPart;
	int VotosSeccPart[Seccional][partidoPolitico];
	for (int i = 0;i < Seccional;i++) {
		for (int j = 0;j < partidoPolitico;j++) {
			for (int k = 0;k < NumeroMesa;k++) {
				VotosSeccPart[i][j] += resultado[i][j][k];
				totalPuntuacionVotosSeccPart += resultado[i][j][k];
			}
			cout << "total votos Seccional n°:" << i << "Del partido Politico n° " << j << ":" << endl; << endl;
			cout << VotosSeccPart[i][j]
		}
	}

	int VotosTotalPartido[partidoPolitico];
	for (int i = 0;i < Seccional;i++) {
		for (int j = 0;j < partidoPolitico;j++) {
			for (int k = 0;k < NumeroMesa;k++) {
				VotosTotalPartido[j] += cantVotos[i][j][k];
			}
		
		}
	}

	for (int i = 0;i < votosTotalPartido.size();i++) {
		cout << "votos del partido " << i << ": " << votosTotalPartido[i] << endl;
	}
	for (int i = 0; i < partidoPolitico; i++) {
		ResFinal(i, VotosTotalPartido[i], totalCantVotos);
	}

	int VotosCantxSeccional[Seccional];
	for (int i = 0;i < Seccional;i++) {
		for (int j = 0;j < partidoPolitico;j++) {
			for (int k = 0;k < NumeroMesa;k++) {
				VotosCantxSeccional[i] = cantVotos[i][j][k];
			}
		}
	}

	int seccionalMasVotantes = 0;
	if(seccionalMasVotantes <= VotosCantxSeccional[1]) seccionalMasVotantes=1 
	for (int i = 1; i < Seccional, i++) {
		if (VotosCantxSeccional[i] > VotosCantxSeccional[i - 1]) seccionalMasVotantes = i;
	}
	
	cout << "la seccional con mas cantidad de votantes es " << seccionalMasVotantes << endl;
	cout << "Promedio de resultados punto 2: " totalPuntuacionVotosSeccPart /(Seccional*partidoPolitico);
	double desviacionesCuadradas[seccional * partidoPolitico];
	int cont=0;
	double sumaDesviacionesCuadradas=0;
	for (int i=0; i < Seccional; i++) {
		for (int k = 0; k < partidoPolitico;k++)

			desviacionesCuadradas[cont] = (CalcularDesviacion((totalPuntuacionVotosSeccPart / (Seccional * partidoPolitico)), VotosSeccPart[i][partidoPolitico]) * (CalcularDesviacion((totalPuntuacionVotosSeccPart / (Seccional * partidoPolitico)), VotosSeccPart[i][partidoPolitico])))
			sumaDesviacionesCuadradas += desvacionesCuadradas[cont];
	}
	double pasoTres = (sumaDesviacionesCuadradas / cont)
		double raizCuadrada = sqrt(pasoTres);

	cout << "Desviacion Estandar: "<< raizCuadrada <<endl;
}
