/*Ejercicio 3: Realice una función que tome como parámetros un vector de números enteros y devuelva la suma
 * de sus elementos*/

#include <iostream>

using namespace std;

void pedirDatos();
int Suma(int vec[], int);

int vec[100], tam;

int main(){

    pedirDatos();
    cout<<"\nLa suma de los elementos del vector es: "<<Suma(vec,tam)<<endl;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de elementos del vector: ";
    cin>>tam;
    for(int i = 0; i<tam; i++){
        cout<<i+1<<". Digite un número: ";
        cin>>vec[i];
    }
}

int Suma(int vec[],int tam){
    int suma=0;
    for(int i=0; i<tam; i++){
        suma += vec[i];
    }
    return suma;
}
