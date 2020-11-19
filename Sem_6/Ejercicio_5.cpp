/*Ejercicio 5: Pedir al usuario N números, almacenarlos en un arreglo dinámico posteriormente ordenar los números en
 * orden ascendente y mostrarlos en pantalla.
 * Nota: Utilizar cualquier método de ordenamiento. */

#include <iostream>

using namespace std;

void pedirDatos();
void ordenar(int *, int);
void imprimir(int *, int );

int num, *ptr_arreglo;

int main(){

    pedirDatos();
    ordenar(ptr_arreglo, num);
    imprimir(ptr_arreglo, num);
    delete [] ptr_arreglo;
    ptr_arreglo = nullptr;

    return 0;
}

void pedirDatos(){
    cout<<"Digite el número de elementos: "; cin>>num;
    ptr_arreglo = new int[num];
    for(int i=0; i<num; i++){
        cout<<"Digite un número ["<<i<<"]: "; cin>>*(ptr_arreglo+i); //ptr_arreglo[i]
    }
}
void ordenar(int *ptr_arreglo, int num){
    int aux;
    for(int i=0; i<num; i++){
        for(int j=0; j<num-1; j++){
            if(ptr_arreglo[j] > ptr_arreglo[j+1]){
                aux = ptr_arreglo[j];
                ptr_arreglo[j] = ptr_arreglo[j+1];
                ptr_arreglo[j+1] = aux;
            }
        }
    }
}

void imprimir(int *ptr_arreglo, int num){
    for(int i=0; i<num; i++){
        cout<<*(ptr_arreglo+i)<<"\t";
    }
}