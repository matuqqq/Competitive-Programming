#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int ExtractS(string texto) {
	return stoi(texto.substr(0, 1));
}
int ExtractP(string texto) {
	return stoi(texto.substr(2,1))
}

int ExtractR(string texto) {
	return stoi(texto.substr(6));
}

void mostrarDetallesFicha() {

	fstream datos("./datos.txt", ios::in)
	if (!datos) { cout << "hay error pa" << endl; return 0; }
	string linea = "";
	while (getline(datos, linea)) {
		cout << linea << endl;
	}
}

void mostrarTablaResultados(vector<vector<int>> fichas) {
	for (int i=0; i < fichas.size() ;i++) {
		cout << "seccional: " << i << endl;
		for (int k = 0;k < fichas[i].size();k++) {
			cout << "partido: " k << ":  " << fichas[i][k] << endl;
		}
	}
}

vector<int> convFichasATotalVotos(vector<vector<int>> fichas) {
	vector<int> temp(6,0);
	for (int i = 0; i < fichas.size();i++) {
		for (int k = 0; k < fichas[i].size();k++) {
			temp[k] += fichas[i][k];
		}
	}
	return temp;
}

void TablaResultados(vector<int> totalVotos) {
	for (int i = 0; i < totalVotos.size();i++) {
		cout << "total de votos del partido politico n°: " << i + 1 << " " << totalVotos[i] << endl;
	}
}

vector<int> FichasOrdenados(vector<int> fichas) {
	sort(fichas.rbegin(), fichas.rend());
	return fichas;
}

int ObtenerTotalVotos(vector<vector<int>> fichas) {
	int acumulador=0;
	vector<int> totalvotos = convFichasATotalVotos(fichas);
		for (int i = 0;i < totalvotos.size();i++) {
			acumulador += totalvotos[i];
		}

	return acumulador;
}

int convFichasATotalVotosPorSeccional(vector<vector<int>> fichas, int numSeccional) {
	int acumulador=0;
	for (int i = 0; i < fichas.size();i++) {
		for (int k = 0; k < fichas[i].size();k++) {
			if(numSeccional == i) acumulador++
		}
	}
	return acumulador;
}

void porcentajeSobreElTotal(int numPartido,vector<vector<int>> fichas){
	cout << "numero de partido politico: " << numPartido << endl;

	vector<int> fichasPartido = convFichasATotalVotos(fichas)
	cout << "cantidad de votos de este partido: " << fichasPartido[numPartido] << endl;

	int Total = ObtenerTotalVotos(fichas);
	cout << "porcentaje obtenido de los votos generales: " << (fichasPartido[numPartido] / Total)*100 << endl;
}

void ResultadosFinales(vector<vector<int>> fichas) {
	TablaResultados(convFichasATotalVotos(fichas));
	TablaResultados(FichasOrdenados(convFichasATotalVotos(fichas));
	for (int i = 0;i < fichas.size();i++) {
		for (int k = 0;k < fichas[i].size();k++) {
			porcentajeSobreEltotal(k, fichas);
		}
	}
}

int seccionalMayVotantes(vector<vector<int>> fichas) {
	vector<int> TotalVotosPorSeccional;
	int temp=0;
	for (int i = 0;i < fichas.size();i++) {
		TotalVotosPorSeccional[i] = convFichasATotalVotosPorSeccional(i,fichas)
	}
	temp=0
	for (int i = 1;i < TotalVotosPorSeccional.size();i++) {
	 if(TotalVotosPorSeccional[i]>TotalVotosPorSeccional[i-1]) temp = i
	}
	cout << "la seccional con mas habitantes es " << temp << "con " << TotalVotosPorSeccional[i] << " votos" endl;

	}

int promTablaResultados(vector<int> totalVotos) {

	int sumatoria =0
		for (int i = 0; i < totalVotos.size();i++) {
			cout << "total de votos del partido politico n°: " << i + 1 << " " << totalVotos[i] << endl;
			sumatoria += totalVotos[i];
		}
	return (sumatoria / totalVotos.size());
}

void Estadistica(vector<vector<int>> fichas) {
	seccionalMayVotantes(fichas); //+10p
	promTablaResultados(convFichasATotalVotos(fichas)); // +10p

	
}

int main() {
	vector<vector<int>> fichas;
	fstream datos("./datos.txt", ios::in)
		if (!datos) { cout << "hay error pa" << endl; return 0; }
		string linea = "";
		while (getline(datos, linea)) {	
			fichas[ExtractS(linea)][ExtractP(linea)] += ExtractR(linea);
		}
		mostrarDetallesFicha(); // +5p
		mostrarTablaResultados(fichas); // +20p
		TablaResultados(convFichasATotalVotos(fichas)); // +10p
		ResultadosFinales(fichas); // +15p
		Estadistica();



}