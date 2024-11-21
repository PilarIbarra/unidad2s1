//María del Pilar Ibarra Maya
//24041184
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double lad1,lad2,lad3;
	cout<<" este codigo muestra el area de un triangulo usando la formula de Herón\n"<<endl;
	cout<<"ingrese el primer lado del triangulo: ";
	cin>>lad1;
	cout<<"ingrese el segundo lado del triangulo: ";
	cin>>lad2;
	cout<<"ingrese el tercer lado del triangulo: ";
	cin>>lad3;
	//calular el semiperimetro
	double semiperimetro =(lad1+lad2+lad3)/2;
	//area con la formula de herón
	double area=sqrt(semiperimetro*(semiperimetro-lad1)*(semiperimetro-lad2)*(semiperimetro-lad3));
	//mostrar resultado
	cout<<"el area del triangulo es: "<<area<<endl;
	return 0;
}