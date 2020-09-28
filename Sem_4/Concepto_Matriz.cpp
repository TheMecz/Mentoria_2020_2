/*----------------------------------¿Qué es una matriz o tabla?----------------------------------
 * Una matriz es un vector de vectores o también llamado array bidimensional.
 *
 *                  columna 0   columna 1  ...  columna n-2   columna n-1
 *      filas 0        [2]         [5]              [8]           [1]
 *      filas 1        [2]         [5]              [8]           [1]
 *            .
 *            .
 *      filas n-2      [2]         [5]              [8]           [1]
 *      filas n-1      [2]         [5]              [8]           [1]
 *
 * Tipo nombre[nfilas][nColumnas];
 *
 * Ejemplos:
 *                                                                                       0     1     2
 * int numeros[2][3];      ------>   int numero[2][3] = {{1,2,3} ,                    0 [1]   [2]   [3]
 *                                                        {4,5,6}}                    1 [4]   [5]   [6]
 *
 * cout<<numeros[1][2];   ------>  6
 * cout<<numeros[0][1];   ------>  2
 *
 * */

#include <iostream>
using namespace std;

int main() {

    int matriz[2][2];

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<"Digite un número: "; cin>>matriz[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matriz[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}