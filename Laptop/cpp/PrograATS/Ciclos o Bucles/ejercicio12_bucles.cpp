/* Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int n,suma=0;
    cout<<"Introduzca un numero: ";cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            suma-=i;

        }
        else{
            suma+=i;
        }
    }
    cout<<"\nEl resultado es: "<<suma<<endl;
    system("pause");
    return 0;
}