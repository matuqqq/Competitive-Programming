#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct product
{
    string name;
    double price;
    int stock;
};

vector <product> productos;

void NuevoProducto()
{
    product producto;
    cout << "Ingrese el nombre del producto:" << endl;
    cin >> producto.name;
    cout << "Ingrese el precio del producto: " << endl;
    cin >> producto.price;
    cout << "Ingrse el stock del producto: " << endl;
    cin >> producto.stock;
    if(producto.name!= "" && producto.price != 0)
    {
        cout << "producto cargado con exito " << endl;
        productos.push_back(producto);
    }
    else
    {
        cout << "Error, producto no cargado, volviendo al menu.." << endl;
    }
}

void MostrarInventario()
{
    for (int i=0; i< productos.size(); i++)
    {
        cout << i << " - " << productos[i].name << "  " << productos[i].price << "$" << "   " << productos[i].stock << " en stock" << endl;
    }
}
void VenderProducto()
{
    string nomb="";
    cout << "Ingrese el nombre exacto del producto: ";
    MostrarInventario();
    cin >> nomb;
    int numProd=-1;
    for (int i=0; i< productos.size(); i++)
    {
        if(productos[i].name == nomb) numProd=i;
    }
    if(nomb != "" && numProd != -1)
    {
        int cant=0;
        cout << "ingrese la cantidad a vender de " << productos[numProd].name << " max " << productos[numProd].stock << endl;
        cin >> cant;
        if(cant>0 && cant <= productos[numProd].stock)
        {
            cout << "Cantidad vendida!" << endl;
            productos[numProd].stock = productos[numProd].stock - cant;
            cout << "Nuevo stock: " << productos[numProd].stock << endl;
        }
        else cout << "Cantidad a vender por debajo de stock... volviendo al menu"<<endl;

    }
    else cout << "nombre vacio ... volviendo al menu"<<endl;
}
void BuscarProd()
{
    string nomb="";
    cout << "Ingrese el nombre exacto del producto: "<<endl;
    MostrarInventario();
    cin >> nomb;
    int numProd=-1;
    for (int i=0; i< productos.size(); i++)
    {
        if(productos[i].name == nomb) numProd=i;
    }
    if(numProd != -1 )
    {
        cout << numProd << " - " << productos[numProd].name << "  " << productos[numProd].price << "$" << "   " << productos[numProd].stock << " en stock" << endl;

    }
}
int main()
{
    while (true)
    {
        int opt=0;
        cout << "1- ingresar un nuevo producto"<<endl;
        cout << "2- Mostrar inventario completo"<<endl;
        cout << "3- Vender un producto x nombre"<<endl;
        cout << "4- Consultar Stock por nombre"<<endl;
        cout << "5- Salir"<<endl;
        cin >> opt;
        if(opt > 5 && opt < 0)
        {
            cout << "opcion incorrecta" << endl;
        }
        else
        {
            system("cls");
            switch (opt)
            {
            case 1:
            {
                NuevoProducto();
                getchar();
                system("cls");
                break;
            }
            case 2:
            {
                MostrarInventario();
                getchar();
                system("cls");
                break;
            }
            case 3:
            {
                VenderProducto();
                getchar();
                system("cls");
                break;
            }
            case 4:
            {
                BuscarProd();
                getchar();
                system("cls");
                break;
            }
            case 5:
            {
                cout << "Saliendo del sistema.. " << endl;
                return 0;
            }
            }
        }

    }

}
