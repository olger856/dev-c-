#include<iostream>
using namespace std;

	/*Este programa muestra la iteraccion con el usuario a traves de la consola
	  para solicitar 2 numeros y mostrar el resultado de las 4 operaciones
	  matematicas basicas*/

main(void){
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	double num6;
	double num7;
	double num8;
	double resultado;
	double suma;
	double resta;
	double divicion;
	
	cout<<"Ingrese un numero para la multiplicacion:";
	cin>>num1;
	
	cout<<"Ingrese otro numero para la multiplicacion:";
	cin>>num2;
	
	cout<<"Ingrese un numero para la suma:";
	cin>>num3;
	
	cout<<"Ingrese otro numero para la suma:";
	cin>>num4;
	
	cout<<"Ingrese un numero para la resta:";
	cin>>num5;
	
	cout<<"Ingrese otro numero para la resta:";
	cin>>num6;
	
	cout<<"Ingrese un numero para la divicion:";
	cin>>num7;
	
	cout<<"Ingrese otro numero para la divicion:";
	cin>>num8;
	
	resultado=num1*num2;
	suma=num3+num4;
	resta=num5-num6;
	divicion=num7/num8;
	
	cout<<"La multiplicacion es: "<<resultado<<endl;
	cout<<"La suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La divicion es: "<<divicion<<endl;
	
}
