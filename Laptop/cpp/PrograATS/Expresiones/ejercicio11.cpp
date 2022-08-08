#include <iostream>
#include<math.h>
using namespace std;
int main(){
	float cateto1, cateto2, hipotenusa;
	
	cout<<"Enter first side: "; cin>>cateto1;
	cout<<"Enter second side: "; cin>>cateto2;
	
	hipotenusa = sqrt(pow(cateto1, 2)+pow(cateto2, 2));
	
	cout.precision(3);
	cout<<"Hipotenuse equals to: "<<hipotenusa;
	return 0;
}