/* La sentencia while: ->primero piensa, luego actua
    while(expresion logica){
        conjunto de instrucciones;
    }
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int i;
    i=10;
    while(i>=1){
        cout<<i<<endl;
        i-=1;

    }

    getch();
    return 0;
}