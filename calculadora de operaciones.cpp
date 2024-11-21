//María del Pilar Ibarra Maya
//24041184
#include <iostream>
using namespace std;
//fflush() es una función en C++ que vacía el buffer de salida de un flujo.
//Se utiliza principalmente para garantizar que la salida se muestre inmediatamente sin esperar al cierre del flujo o al final del programa
//
double num1,num2;
int opcion;
int main(){
	//menú de opciones
cout <<"Calculadora Básica";
cout << "1. Sumar dos números";
cout << "2. Restar dos números";
cout << "3. Multiplicar dos números";
cout << "4. Dividir dos números";
cout << "Ingrese su opción (1-4): ";
cin >> opcion;
//Dado a que es un menú se usa un switch
switch(opcion){
	case 1:{
		cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    double resultado = num1 + num2;
   cout << "El resultado es: " << resultado << endl;
    //endl  es un salto de linea y vacia el buffer de salida similar a flush
    break;
		break;
	}
	 
    case 2: {
    	cout<<"ingrese el primer numero: ";
    cin>>num1;
    cout<< "ingresa el segundo numero";
    cin>>num2;
    double resultado=num1-num2;
    cout<< "el resltado es: "<<resultado<<endl;
		break;
	}
    
	case 3:
	{cout<<"ingresa el primer numero: ";
	cin>>num1;
	cout<<"ingresa el segundo numero: ";
	cin>>num2;
	double resultado=num1*num2;	
	cout<<"el resultado es: "<<resultado<<endl;
		break;
	}
    case 4:{
    	cout<<"ingresa el primer numero: ";
	cin>>num1;
	cout<<"ingresa el segundo numero: ";
	cin>>num2;
	double resultado=num1/num2;	
	cout<<"el resultado es: "<<resultado<<endl;
		break;
	}
	default:
    cout << "Opción inválida";
	
}
	
}