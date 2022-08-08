/*Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos*/

#include<iostream>
using namespace std;
int main(){
    int notaA,notaB,notaC,notaD, promedio=0;
    cout<<"Nota del primer alumno: ";cin>>notaA;
    cout<<"Nota del segundo alumno: ";cin>>notaB;
    cout<<"Nota del tercer alumno: ";cin>>notaC;
    cout<<"Nota del cuarto alumno: ";cin>>notaD;
    promedio=(notaA+notaB+notaC+notaD)/4;
    cout<<"\nNota promedio es: "<<promedio<<endl;
}