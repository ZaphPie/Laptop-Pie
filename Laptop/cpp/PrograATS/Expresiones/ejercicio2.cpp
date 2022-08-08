/* Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA */
#include<iostream>
using namespace std;
int main(){
    float precio,iva=0.18,suma=0;
    cout<<"Costo del producto:$ ";cin>>precio;
    suma=precio+(precio*iva);
    cout<<"\nEl precio del producto al aplicarle el IVA es: "<<suma;
    return 0;
}