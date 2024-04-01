#include<iostream>
using namespace std;

 //======================PUNTEROS======================//
 
main(void){
	
	//declaramos una variable normal denominada "x" de tipo entero
	int x;
	x=8;
	
	//declaramos un puntero a int
	int *ptr;
	
	//guardamos la direccion de 'x' en el puntero
	ptr=&x;
	
	cout<<"La direccion de X es: "<<&x<<endl; //mostramos la direccion de x. algo como 0x6ffe0c
	cout<<"El valor del puntero ptr es:"<<ptr<<endl;//mostramos el valor del puntero, esto es 0x6ffe0c
	cout<<"La direccion del punteri ptr es: "<<&ptr<<endl; /*el puntero tambien tiene su direccion
	 de memoria y aqui la mostramos, algo como 0x6ffe00*/
	
}
