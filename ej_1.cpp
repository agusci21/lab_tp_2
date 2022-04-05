/*Desarrolle un programa para que una inmobiliaria decida si invertir en una propiedad (o no)
según: la ubicación, el precio, si es casa o departamento y si tiene cochera. Si está en Godoy
Cruz, y el precio es de hasta 70000$, invierte sin dudar (no importa nada más). En cambio, si el
precio es mayor, sólo invierte si tiene cochera y es casa, caso contrario, no invierte. Si el precio
es menor, debe ir a visitarla y averiguar más datos. Si está en Ciudad, y el precio es mayor a
100000$ no invierte. Si es menor y es casa, invierte. Si es departamento, solo con cochera
invierte, caso contrario, debe averiguar si hay cocheras próximas. Si está en Las Heras, sólo en
departamentos con cochera invierte, caso contrario, no invierte.*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    string ubicacion = " ";
    int precio = 0;
    int tieneCochera = 0;
    int esCasa = 0;

    cout << "Es una propiedad una buena inversion?\n Donde se ubica su departamento?";
    cin>> ubicacion;

    cout << "Cuanto vale dicha propiedad?";
    cin >> precio;
   
    if( ubicacion == "Godoy Cruz" && precio <= 70000){
        cout << "Es una buena inversion";
        return 0;
    }else if(precio > 70000){

        cout<< "Tiene cochera? \n 0---No, 1---Si";
        cin>> tieneCochera;

        cout<< "Es una casa? \n 0---No, 1---Si";
        cin>> esCasa;
        
         cout << "Es una buena inversion";
        return 0;

    }
    if(precio < 70000){
        cout<< "Un encargado visitara su propiedad";
        return 0;
    }else if(ubicacion == "Ciudad" && precio < 100000){
        cout<< "No es una buena inversion";
        return 0;
    }

    cout<< "Tiene cochera? \n 0---No, 1---Si";
    cin>> tieneCochera;

    cout<< "Es una casa? \n 0---No, 1---Si";
    cin>> esCasa;

    if(precio < 100000 && esCasa){
        cout<< "Es una buena inversion";
        return 0;
    }
    if(precio < 100000 && !esCasa){
        cout<< "Es una buena inversion";
        return 0;
    }
    if(ubicacion == "Las Heras" && tieneCochera){
        cout<< "Es una buena inversion";
        return 0;
    }

    
    cout << "No es una buena inversion";
    return 0;
}
