//Parámetro de tipo vector

#include <iostream>

using namespace std;


void cuadrado(int vec[],int);
void imprimir(int vec[], int);

int main(){

    const int Tam =5;
    int vec[Tam] = {1,2,3,4,5};
    cout<<"El vector original es: "<<endl;
    imprimir(vec, Tam);
    cuadrado(vec,Tam);
    cout<<"El vector elevado es: "<<endl;
    imprimir(vec, Tam);
    return 0;
}

void cuadrado(int vec[], int tam){
       for(int i=0; i<tam; i++){
           vec[i] *= vec[i];
       }
}
void imprimir(int vec[], int tam){
    for(int i=0; i<tam; i++){
        cout<<vec[i]<<'\t';
    }
    cout<<endl;
}