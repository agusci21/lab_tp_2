#include<iostream>

using namespace std;

/*
Si se trata de un viaje a algún lugar dentro de la provincia; para 1 o 2
personas, se le regalará entradas a un espectáculo; 

si fueran 3 o más personas, 2 días más de
estadía. 

Si en cambio fuera un viaje fuera de la provincia (pero dentro de Argentina); para 1 o 2
personas; menos de 7 días, 1 día más de estadía; 

caso contrario, excursiones gratis. Si fueran 3 o
más personas, y menos de 7 días, descuentos a espectáculos, para más días, serán excursiones
gratis. 

Si el viaje fuera al exterior; para 1 o 2 personas, hasta 7 días se le dará 1 un juego
completo de valijas; 

para más días, excursiones gratis. Para el resto de los viajes al extranjero; 7
o más días se les darán cupones de descuento; menos de 7 días se les entregará un juego
completo de valijas
*/

int main(){
    int cantidadDePersonas, cantidadDeDias = 0;
    bool internacional, interprovincial = false;
    string premio = "Nada";

   cout<< "Cuantas personas viajaran?\n";
   cin >> cantidadDePersonas;
   
   cout<< "Sera un viaje dentro de su provincia? \n 0 --- No \n 1 --- si\n";
   cin >> interprovincial;

   cout<< "Sera un viaje internacional? \n 0 --- No \n 1 --- si\n";
   cin >> internacional;

   cout<< "Cuantos dias viajara?\n";
   cin >> internacional;


   if(internacional && cantidadDePersonas <= 2){
       premio = " Entradas para un espectaculo";
   }else if(cantidadDePersonas >= 3){
       premio = "2 dias mas de estadia";
   }else if(!interprovincial && !internacional && cantidadDePersonas >= 2 && cantidadDeDias < 7 ){
       premio = "1 dias mas de estadia";
   }else if(!interprovincial && !internacional && cantidadDePersonas >= 2 && cantidadDeDias > 7){
       premio = "excursiones gratis";
   }else if(internacional)
   




    cout << "Su premio sera: " << premio;

    return 0;
}