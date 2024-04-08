#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

//clase videojuego 

class videojuego{

private:
 //Atributos 
 vector<string>categorias;     //Vector categorias
 string name;                 //Variable para nombre del usario
 int cant_jugdores;          //Variable para Cantidad de jugadores
 string desarrollador;      //Variable para desarrollador
 int anio;                 //Variable para año de lanzamiento
 string plataforma;       //Variable para plataforma 

public:

// constructor
videojuego(){};

videojuego(const string n, int cj ,string des , string cat, int a, string plat){}

// Setters ----------------------------------------

void setCantJugadores(const int cj){
   cant_jugdores = cj;
}
void setName(const string n){
   name = n;
}
void setCategorias(const string cat){
desarrollador = cat;
}
void setDesarrolador(const string des){
  desarrollador = des; 
}
void setAnio(const int a){
  anio = a;  
}
void setPlataforma(const string plat){
  plataforma = plat;
}

// Getters ----------------------------------------

int getCantJugadores() const{
return cant_jugdores;
}
string getName() const {
return name;
}
vector<string> getCategorias() const {
return categorias;
}
int getAnio() const {
return anio;
}
string getPlataforma() const {
return plataforma;
}
string getDesarrolador() const {
return desarrollador;
}

//funcion imprimir por plataforma
void imprimir(const videojuego){
//variables para la clase
string DesName;
int eleccion;
//interaccion con el usuario
cout << "//-------Menu--------//" << endl;
cout << "1. imprimir lista completa" << endl;
cout << "2. Imprimir lista Por Desarrollador" << endl;
//imprimir lista completa
if(eleccion == 1){
//vector almacenar datos de la plataforma
vector<string>Todaslasplataformas;

//Agregar plataformas al vector


//ordenar alfabeticamente
sort(Todaslasplataformas.begin(),Todaslasplataformas.end());
//imprimir lista ordenada
for( p.plataforma == Todaslasplataformas){

    cout << p.Name , p.CantidadJugadores , p.Categorias , p.desarrolador , p.anio  , p.plataforma << endl;
}
}
//opcion filtrar plataforma
else if(eleccion == 2){
//interaccion con el usuario
cout << "Nombre de la plataforma "<< endl;
cin >> DesName;
//imprime lista
for( p.plataforma == DesName){

 cout << p.Name , "---" , p.CantidadJugadores , "---" , p.Categorias , "---" , p.desarrolador  , "---" , p.anio  , "---" , p.plataforma << endl;

}
}
}
};