#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int numero,opc,cubo;
    float num_cubo;
    cout<<"\tBienvenido, ingrese una opcion:"<<endl;
    cout<<"1.Cubo de un numero"<<endl;
    cout<<"2.Numero par o impar"<<endl;
    cout<<"3.Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opc;
    switch(opc){
        case 1: cout<<"\nIntroduzca el numero: ";cin>>numero;
        cubo=pow(numero,3);
        cout<<"El numero es: "<<cubo;break;
        case 2:
        cout<<"Introduzca el numero: ";cin>>numero;
        if(numero%2==0){
            cout<<"El numero es par";break;
        }
        else{
            cout<<"El numero es impar";break;
        }
        case 3: cout<<"Gracias, hasta la proxima!"<<endl;break;
    }
    return 0;
}