/* Comprobar si un número digitado por el usuario es positivo o negativo.*/
#include<iostream>
using namespace std;
int main(){
    float numero;
    cout<<"Digite un numero: ";
    cin>>numero;
    if(numero==0){
        cout<<"El numero es cero";
    }
    else if(numero>0){
        cout<<"El numero es positivo";
    }
    else{
        cout<<"El numero es negativo";
    }
    cout<<endl;
    return 0;
}