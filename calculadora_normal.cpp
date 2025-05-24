/*
Ejercicio 1: Calculadora con Punteros a Funciones
Implementar una calculadora simple donde el usuario pueda elegir
entre diferentes operaciones (suma, resta, multiplicación, división)
Deberán crear punteros a funciones para cada operación y un menú que
permita seleccionar la operación deseada.
*/
//ERROR EM LA DIVISION
#include <iostream>
using namespace std;

void digitar_numero(double &a , double &b){
	
	cout<<"ingrese el primer numero: "<<endl;
	cin>>a;
	cout<<"ingrese el segundo numero: "<<endl;
	cin>>b;
}
int sumar(int a ,int b)
{
	return a+b;
}
int restar(int a , int b){
	return a-b;
}
int multiplicar(int a , int b)
{
	return a*b;
}
double dividir (int a , int b)
{
	if (b==0){
		cout<<"no puede dividirse por 0 ";
		return 0;
	}
	return a/b;
}

int main(){
int opciones;
double x , y ,respuesta;
cout<<"------------------------calculadora----------------------"<<endl;
cout<<"operaciones: "<<endl;
cout<<"1) sumar"<<endl;
cout<<"2) restar"<<endl;
cout<<"3) multiplicar"<<endl;
cout<<"4) dividir"<<endl;
cout<<"5) salir"<<endl;
cout<<"seleccione una opcion: "<<endl;
cin>>opciones;

if (opciones != 5) {
	digitar_numero(x, y);
switch(opciones){
case 1:
	respuesta = sumar(x, y);
	break;
case 2:
	respuesta=restar(x,y);
	break;
case 3:
	respuesta=multiplicar(x,y);
	break;
case 4: 
	respuesta=dividir(x,y);
	break;
default:
	cout<<"opcion no valida";
}
cout<<"la respuesta es: "<<respuesta;
}
return 0;
}
