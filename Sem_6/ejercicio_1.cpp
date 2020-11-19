#include<iostream>
#include<vector>
using namespace std;

void menu();
void borrar();
void anadir();
void buscar();
void tabla_estelar();
int opcion;

vector<string> nombre = {"zeta puppis", "aludra", "formalhaut", "canopus","sol","arcturus","antares"};
vector<char> tipo = {'O','B','A','F','G','K','M'};

int main(){

    menu();

    return 0;
}

void menu() {
    bool band = true;
    cout << "Bienvenido al menu estelar " << endl;
    cout << "Seleccione las siguientes opciones: " << endl;
    cout << "Opcion 1: Borrar una estrella." << endl;
    cout << "Opcion 2: Añade una estrella y su tipo." << endl;
    cout << "Opcion 3: Buscar una estrella" << endl;
    cout << "Opcion 4: Salir." << endl;


    do {
        cout << "Digite la opción a realizar: " << endl;
        cin >> opcion;
        switch (opcion) {
            case 1:
                borrar();
                break;
            case 2:
                anadir();
                break;
            case 3:
                buscar();
                break;
            case 4:
                band = false;
                break;
            default:
                cout << "La opción no existe."<<endl;
                break;
        }
    }while (band);
}
void borrar(){
    string eliminar;
    int indice=0;
    tabla_estelar();
    cout<<"Digite la estrella a eliminar: ";
    cin>>eliminar;
    for(int i=0; i<nombre.size();i++){
        if(nombre[i] == eliminar){
            indice=i;
        }
    }
    nombre.erase(nombre.begin() + indice);
    tipo.erase(tipo.begin() + indice);
}

void anadir(){
    string agregar;
    tabla_estelar();
    cout<<"Añade una estrella: ";
    cin>>agregar;
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
    string elemento;
    tabla_estelar();
    cout<<"Busque una estrella: ";
    cin>>elemento;
    for(int i=0; i<nombre.size();i++) {
        if (nombre[i] == elemento) {
            cout<<"El nombre de la estrella es: "<<nombre[i]<<endl;
            cout<<"El tipo de la estrella es: "<<tipo[i]<<endl;
        }
    }


}

void tabla_estelar(){

    for(int i=0; i<nombre.size(); i++){
        cout<<i+1<<". "<<nombre[i]<<"\n";
    }
    cout<<'\n';
    for(int i=0; i<tipo.size(); i++){
        cout<<i+1<<". "<<tipo[i]<<"\n";
    }
    cout<<'\n';
}