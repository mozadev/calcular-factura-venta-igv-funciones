/*
Realice una aplicaci�n en C++ que permita emitir la factura correspondiente a 
una compra de un art�culo determinado. El programa deber� recibir como datos la cantidad 
de unidades adquiridas y el precio del art�culo y emitir el monto total a pagar.
Recuerde que para emitir una factura deber� de considerar que el IGV es del 18% del precio total
*/

#include<iostream>

#include<conio.h>


using namespace std;

float calculacostoarticulo(int unid,float precioartic)
{
	float costo=0;
	costo = unid*precioartic*(1-0.18);
	return costo;

}

int main()
{

	int unid;
	int precioartic;
	float montoapagar;
	cout << "ingrese numero de articulos: ";
	cin >> unid;
	cout << "ingrese precio del articulo: ";
	cin >> precioartic;
	montoapagar = calculacostoarticulo(unid, precioartic);
	cout << montoapagar;

	_getch();
	


}