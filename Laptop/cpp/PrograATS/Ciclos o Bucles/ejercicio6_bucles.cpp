/* Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la función pow.*/
#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int x,y,resultado=1,a,i=1;
    cout<<"Ingrese la base: ";
    cin>>x;
    cout<<"Ingrese la potencia: ";
    cin>>y;
    while(i<=y){
        resultado*=x;
        i++;
    }
    cout<<"El resultado es "<<resultado<<endl;
    return 0;
}