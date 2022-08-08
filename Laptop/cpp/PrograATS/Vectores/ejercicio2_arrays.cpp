/* Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
*/
#include<iostream>
#include<stdlib.h> 
using namespace std;
int main(){
int numeros[]={1,2,3,4,5};
int producto=1;
for(int i=0;i<5;i++){
    producto*=numeros[i];
}
cout<<"El producto acumulado de los elementos del vector es: "<<producto<<endl;
}
