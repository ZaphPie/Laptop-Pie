/* Mostrar los meses del año, pidiéndole al usuario un número entre (1-12), y mostrar el mes al que corresponde.*/
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Digite el numero del mes [1-12]: ";
    cin>>num;
    switch(num){
        case 1: cout<<"Es enero"; break;
        case 2: cout<<"Es febrero";break;
        case 3:cout<<"Es marzo";break;
        case 4: cout<<"Es abril";break;
        case 5: cout<<"Es mayo";break;
        case 6: cout<<"Es Junio";break;
        case 7: cout<<"Es Julio";break;
        case 8: cout<<"Es agosto";break;
        case 9: cout<<"Es setiembre";break;
        case 10: cout<<"Es octubre";break;
        case 11: cout<<"Es noviembre";break;
        case 12: cout<<"Es diciembre";break;
        default: cout<<"Que carajos acaba de ingresar?";break;
    }
    return 0;
}