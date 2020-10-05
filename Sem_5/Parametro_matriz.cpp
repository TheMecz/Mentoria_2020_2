//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include <iostream>

using namespace std;

void mostrarMatriz(int m[][3], int, int);
void calcularCuadrado(int m[][3], int , int);

int main(){
    const int nfilas = 2;
    const int ncol = 3;
    int m[nfilas][ncol] = {{1,2,3},{4,5,6}};
    cout<<"La matriz original es: "<<endl;
    mostrarMatriz(m,nfilas,ncol);
    calcularCuadrado(m,nfilas,ncol);
    cout<<"La matriz elevada es: "<<endl;
    mostrarMatriz(m,nfilas,ncol);

}

void mostrarMatriz(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            cout<<m[i][j]<<'\t';
        }
        cout<<'\n';
    }
}

void calcularCuadrado(int m[][3], int nfilas, int ncol){
    for(int i=0; i<nfilas; i++){
        for(int j=0; j<ncol; j++){
            m[i][j] *= m[i][j];
        }
    }
}