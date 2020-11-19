#include <string.h>
#include <iostream>

using namespace std;

int main(){

    string nombre[5];

    for(int i=0; i<5; i++){
        cin>>nombre[i];
    }
    for(int i=0; i<5; i++){
        cout<<i+1<<". "<<nombre[i]<<endl;
    }

    return 0;
}