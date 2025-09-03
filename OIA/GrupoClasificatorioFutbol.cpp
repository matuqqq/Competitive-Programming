#include <bits/stdc++.h>

using namespace std;
struct equipo
{
    string nombre;
    int puntajeTotal;
    int partidosGanados;
    int partidosEmpatados;
    int partidosPerdidos;
    int GolesFavor;
    int GolesContra;
};

vector<equipo> equipos;

void ingresarEquipos()
{
    equipo tempTeam;
    for(int i=0; i<4; i++)
    {
        string nomb;
        cout << "ingresa el nombre del equipo n°" << i+1 << endl;
        cin >> nomb;
        if(nomb != "")
        {
            tempTeam.nombre = nomb;
            tempTeam.puntajeTotal=0;
            tempTeam.partidosGanados=0;
            tempTeam.partidosEmpatados=0;
            tempTeam.partidosPerdidos=0;
            tempTeam.GolesFavor=0;
            tempTeam.GolesContra=0;

            equipos.push_back(tempTeam);
        }
    }
}

void ingresarDatosPartidos()
{
    for (int i=0; i<4; i++)
    {
        for( int k=0; k<4; k++)
        {
            if(i!=k)
            {
                int golesVisitante=0;
                int golesLocal=0;
                cout << "equipo visitante: " << equipos[k].nombre << " .. vs .. equipo local " <<  equipos[i].nombre << endl;
                cout << "Ingresa los goles visitante " << equipos[k].nombre << endl;
                cin >> golesVisitante;
                cout << "Ingresa los goles local" << equipos[i].nombre << endl;
                cin >> golesLocal;
                equipos[i].GolesFavor += golesLocal;
                equipos[k].GolesFavor += golesVisitante;
                equipos[i].GolesContra += golesVisitante;
                equipos[k].GolesContra += golesLocal;

                if(golesLocal == golesVisitante)
                {
                    //Empate
                    equipos[i].puntajeTotal += 1;
                    equipos[k].puntajeTotal += 1;
                    equipos[i].partidosEmpatados+= 1;
                    equipos[k].partidosEmpatados += 1;

                }
                else if( golesLocal > golesVisitante)
                {
                    //ganaLocal
                    equipos[i].puntajeTotal += 3;
                    equipos[i].partidosGanados ++;
                    equipos[k].partidosPerdidos ++;
                }
                else if( golesLocal<golesVisitante)
                {
                    equipos[k].puntajeTotal += 3;
                    equipos[k].partidosGanados++ ;
                    equipos[i].partidosPerdidos++;
                }
            }
        }
    }
}
void MostrarStats()
{
    for (int i=0; i<4 ; i++)
    {
        cout << i <<" - " << equipos[i].nombre << " ----- Puntaje: "<< equipos[i].puntajeTotal << endl;
        cout << "Partidos Ganados: "<< equipos[i].partidosGanados << endl << "Partidos empatados: " << equipos[i].partidosEmpatados << endl << "Partidos Perdidos: " << equipos[i].partidosPerdidos << endl;
        cout << "Goles a favor: " << equipos[i].GolesFavor << endl<< "Goles en contra " << equipos[i].GolesContra <<endl;
        cout << "Diferencia de goles: " << equipos[i].GolesFavor - equipos[i].GolesContra << endl;
    }
}

void clasificacion()
{
    vector<equipo> ganadores;
    equipo equipo1;
    equipo equipo2;
    ganadores.push_back(equipo1);
    ganadores.push_back(equipo2);
    sort(equipos.begin(), equipos.end(), [] (const equipo &a, const equipo &b)
    {
        return a.puntajeTotal > b.puntajeTotal;
    }
        );
    ganadores[0] = equipos[0];
    ganadores[1] = equipos[1];
    if( equipos[0].puntajeTotal == equipos[1].puntajeTotal )
    {
        cout << "igualdad en puntaje, revisando diferencia goles.. " << endl;
        if((equipos[0].GolesFavor-equipos[0].GolesContra) > (equipos[1].GolesFavor-equipos[1].GolesContra) )
        {
            cout << "equipo " << ganadores[0].nombre << "gana por mayoria de diferencia de goles" << endl;
        }
        else if((equipos[0].GolesFavor-equipos[0].GolesContra) < (equipos[1].GolesFavor-equipos[1].GolesContra) )
        {
            ganadores[1] = equipos[0];
            ganadores[0] = equipos[1];
            cout << "equipo " << ganadores[0].nombre << "gana por mayoria de diferencia de goles" << endl;
        }
        else if((equipos[0].GolesFavor-equipos[0].GolesContra) == (equipos[1].GolesFavor-equipos[1].GolesContra) )
        {
            cout << "igualdad en diferencia de goles, revisando goles a favor.. " << endl;
            if((equipos[0].GolesFavor) > (equipos[1].GolesFavor) )
            {
                cout << "equipo " << ganadores[0].nombre << "gana por mayoria de goles a favor" << endl;
            }
            else if((equipos[0].GolesFavor) < (equipos[1].GolesFavor) )
            {
                ganadores[1] = equipos[0];
                ganadores[0] = equipos[1];
                cout << "equipo " << ganadores[0].nombre << "gana por mayoria de goles a favor" << endl;
            }
        }
    }
        cout << " El Equipo Ganador es " << ganadores[0].nombre << " ----- Puntaje: "<< ganadores[0].puntajeTotal << endl;
        cout << " El Equipo subCampeon es " << ganadores[1].nombre << " ----- Puntaje: "<< ganadores[1].puntajeTotal << endl;

}
int main()
{
    ingresarEquipos();
    ingresarDatosPartidos();
    MostrarStats();
    clasificacion();
    return 0;
}
