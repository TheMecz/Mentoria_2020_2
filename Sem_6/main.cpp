#include<iostream>
#include<vector>
#include<iterator>
#include <cstring>
using namespace std;

void menu();
void borrar();
void anadir();
void buscar();
void tabla_estelar();
int opcion;

vector<string> nombre = {"zeta puppis", "aludra", "formalhaut", "canopus","sol","arcturus","antares"};
vector<char> tipo ={ 'O','B','A','F','G','K','M'};

int main(){

    menu();

    return 0;
}

void menu(){
    cout<<"Bienvenido al menu estelar "<<endl;
    cout<<"Seleccione las siguientes opciones: "<<endl;
    cout<<"Opcion 1: Borrar una estrella."<<endl;
    cout<<"Opcion 2: Añade una estrella y su tipo."<<endl;
    cout<<"Opcion 3: Buscar una estrella"<<endl;
    cout<<"Digite la opción a realizar: "<<endl; cin>>opcion;
    if(opcion==1){
        borrar();
    }
    else
    if(opcion==2){
        anadir();
    }
    else if(opcion==3){
        buscar();
    }
    else{
        cout<<"Esa opcion es incorrecta."<<endl;
    }
}
void borrar(){
    string eliminar;
    int indice;
    tabla_estelar();
    cout<<"Digite la estrella a eliminar: "; cin>>eliminar;
    for(int i=0; i<nombre.size();i++){
        if(nombre[i] == eliminar){
            indice=i;
        }
    }
    nombre.erase(nombre.begin() + indice);
    tipo.erase(tipo.begin()+indice);
}

void anadir(){
    char agregar[50];
    tabla_estelar();
    cout<<"Añade una estrella: ";
    cin.getline(agregar, 50, '\n');
    strlwr(agregar);
    nombre.emplace_back(agregar);
    if(agregar == "zeta puppis"){
        tipo.push_back('O');
    }
    else if(agregar == "aludra"){
        tipo.push_back('B');
    }
    else if(agregar == "formalhaut"){
        tipo.push_back('A');
    }
    else if(agregar == "canopus"){
        tipo.push_back('F');
    }
    else if(agregar == "sol"){
        tipo.push_back('G');
    }
    else if(agregar == "arcturus"){
        tipo.push_back('K');
    }
    else if(agregar == "antares"){
        tipo.push_back('M');
    }
}


void buscar(){
    char buscar[30];
    tabla_estelar();
    cout<<"Busque una estrella: ";
    cin.getline(buscar, 30, '\n');
    strlwr(buscar); //Minusculas
    //strupr(añadir); Mayusculas
    for(int i=0; i<nombre.size();i++) {
        if (buscar == nombre[i]) {
            cout<<"El nombre de la estrella es: "<<nombre[i]<<'\n';
            cout<<"El tipo de la estrella es: "<<tipo[i]<<'\n';
        }
    }
}

void tabla_estelar(){

    for(int i=0; i<nombre.size(); i++){
        cout<<nombre[i]<<"\t";
    }
    cout<<'\n';
    for(int i=0; i<tipo.size(); i++){
        cout<<tipo[i]<<"\t";
    }
    cout<<'\n';
}