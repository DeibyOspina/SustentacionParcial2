#include <iostream>
#include "Videojuego.cpp" //importar clase videojuegos

using namespace std;

//metodo main
int main(){

int option;

//interaccion con el usuario
cout << "//----------Menu-----------//" << endl;
cout << "1. Imprimir lista juegos" << endl;
cout << "2. salir" << endl;

//ciclo elecciones
if(option == 1){

    imprimir();

}
else{
 return;
}

return 0;

}