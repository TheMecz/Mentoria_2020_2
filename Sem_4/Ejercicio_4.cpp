#include <iostream>

using namespace std;

long int Serie(unsigned int num){
    if(num == 1)
        return num*num;
    return Serie(num-1)+num*num;
}


int main() {

    int num;
    cout<<"Digite un número: "; cin>>num;
    cout<<Serie(num);

    return 0;
}
