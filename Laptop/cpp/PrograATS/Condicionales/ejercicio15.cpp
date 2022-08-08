/* Escriba un programa que lea tres números y determine cuál de ellos es el mayor */
#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Ingrese 3 numeros: "<<endl;cin>>a>>b>>c;
    if(a==b&&a==c){
        cout<<"Los tres numeros son iguales";

    }
    else if(a>b&&a>c){
        cout<<"El numero mayor es: "<<a<<endl;
    }
    else if(b>a&&b>c){
        cout<<"El numero mayor es: "<<b<<endl;
    }
    else{
        cout<<"El numero mayor es: "<<c<<endl;
    }
    return 0;
}