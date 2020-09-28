/*------------------------------Cadena de Caracteres----------------------------- */

#include <iostream>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "Max";
    char palabra_2[] = {'M','a','x'};
    char nombre[30];

    cout<<palabra<<endl;
    cout<<palabra_2<<endl;

   cout<<"Digite su nombre: ";
   //gets(nombre);
   cin.getline(nombre,30,'\n');

    cout<<nombre<<endl;

    return 0;
}
