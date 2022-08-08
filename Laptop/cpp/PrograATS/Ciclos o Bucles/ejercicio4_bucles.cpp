/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la temperatura más alta y la más baja */
#include<iostream>
using namespace std;
int main(){
	// Tomar la temperatura exterior cada 4 horas durante 24 horas y calcular la temperatura media,  maxima y minima.
	
	int horas_total=24;
	int horas_frecuencia=4;

	float suma=0, minimo=0, maximo=0;
	float muestra=0;
	int c=0;
	for (int h=0; h<horas_total; h+=horas_frecuencia, ++c){
		cout<<(c+1)<<". Cual es la temperatura: ";
		cin>>muestra;
		suma+=muestra;

		if (c == 0){
			maximo=minimo=muestra;
		}
		if (muestra>maximo)
			maximo=muestra;
		if (muestra<minimo)
			minimo=muestra;
	}
	float media=suma/c;
	cout<<endl;
	cout<<"La temperatura media es: "<<media<<endl;
	cout<<"La temperatura minima es: "<<minimo<<endl;
	cout<<"La temperatura maxima es: "<<maximo<<endl;

	return 0;
}