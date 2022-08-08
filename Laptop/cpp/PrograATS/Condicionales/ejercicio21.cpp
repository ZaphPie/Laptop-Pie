/* Escribe un programa que lea de la entrada estándar tres números. Después debe leer un cuarto número e indicar si el número coincide con alguno de los introducidos con anterioridad.*/

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Ingrese tres numeros: ";cin>>a>>b>>c;
    cout<<"Ingrese un cuarto numero: ",cin>>d;
    if(d!=a&&d!=b&&d!=c){
        cout<<"\nEl numero ingresado es diferente.";
        
    }
    else if(d==a){
        cout<<"\nEl numero ingresado coincide con el "<<a;
    }
    else if(d==b){
        cout<<"\nEl numero ingresado coincide con el "<<b;
    }
    else if(d==c){
        cout<<"\nEl numero ingresado coincide con el "<<c;
    }
    return 0;
}