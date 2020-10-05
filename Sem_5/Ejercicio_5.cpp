/*Ejercicio 5: Cuál es la máxima altura de la pirámide que se puede hacer usando los N cubos que dispone y además saber
 * cuántos cubos sobran (si las heno)

El nivel superior de la pirámide debe después de 1 cubo.
El segundo nivel debe debe de 1 + 2 á 3 cubos.
El tercer nivel debe tener 1 + 2 + 3 á 6 cubos.
El cuarto nivel debe tener 1 + 2 + 3 + 4 x 10 cubos.
El quinto nivel debe tener 1 + 2 + 3 + 4 + 5 á 15 cubos.

Ejemplo n a 13 cubos nivel total 1 1 1 2 1+2 a 3 4 3 1+2+3 a 6 10 4 1+2+3+4 a 10 20

3 niveles 3 cubos
 */

#include <iostream>
#include<math.h>
using namespace std;
int piramide(int num,int n,int piso,int l){
    int resto=0;
    l=num;
    do{
        piso=(n*(n+1))/2;
        num=num-1;
        n++;
    }
    while(num>piso);

    resto=l-piso;
    cout<<"Se puede hacer una piramide de "<<n-1<<" pisos"<<endl;
    cout<<"Sobran "<<resto<<" cubos";
    return 0;
}
int main(){
    int num,n=1,piso=0,l=0;
    cout<<"Cuantos cubos tienes? "<<endl;
    cin>>num;
    piramide(num,n,piso,l);
    return 0;
}

