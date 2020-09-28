#include <iostream>

using namespace std;

int main(){

    int codigo[11];
    int fecha_actual[8];
    int dias=0;
    int dia1, dia2;
    int mes1, mes2;
    int anual1, anual2;
    for(int i=0; i<11; i++){
        cin>>codigo[i];
    }
    cout<<"Fecha Actual: "<<endl;
    for(int i=0; i<8; i++){
        cin>>fecha_actual[i];
    }

    dia1 = codigo[3]*10 + codigo[4];
    dia2 = fecha_actual[0]*10 + fecha_actual[1];

    mes1 = codigo[5]*10 + codigo[6];
    mes2 = fecha_actual[2]*10 + fecha_actual[3];

    anual1 = codigo[7]*1000 + codigo[8]*100 + codigo[9]*10 + codigo[10];
    anual2 = fecha_actual[4]*1000 + fecha_actual[5]*100 + fecha_actual[6]*10 + fecha_actual[7];

    while (anual1 != anual2) {
        dias++;
        dia1++;
        if (dia1 == 30) {
            dia1 = 0;
            mes1++;
            if (mes1 == mes2) {
                mes1 = 0;
                anual1++;
            }
        }
    }
    while (mes1 != mes2) {
        dias++;
        dia1++;
        if (dia1 == 30) {
            dia1 = 0;
            mes1++;
        }
    }
    while (dia1 != dia2) {
        dias++;
        dia1++;
    }


    cout<<"El número de días transcuridos es: "<<dias;

    return 0;
}