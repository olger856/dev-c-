
#include<iostream>
using namespace std;

main(void){
	//Tipos de datos en C y C++
	int a; // variable a
	int b; // variable b
	
	//asignacion de valores a las variables
	a=9;
	b=5;
	
	int c;
	c=a+b;
	
	int d;
	d=c*a;
		
	cout<<"Valor de la variable a: "<<a<<endl;
	cout<<"Valor de la variable a: "<<b<<endl;
	cout<<"Valor de la variable a: "<<c<<endl;
	cout<<"Valor de la variable a: "<<d<<endl;
	cout<<"====================================================="<<endl;
	
	//El operador de "desreferenciacion" nos permite visulizar
	//la dirreccion de memoria que ocupa una varible. Por ejemplo:
	cout<<"La direccion de memoria de la variable a es: "<<&a<<endl;
	cout<<"La direccion de memoria de la variable a es: "<<&b<<endl;
	cout<<"La direccion de memoria de la variable a es: "<<&c<<endl;
	cout<<"La direccion de memoria de la variable a es: "<<&d<<endl;
}
