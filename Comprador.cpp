#include "Comprador.h"
#include "Proveedor.h"
#include <string>
#include "Producto.h"
#include <iostream>
#include "Proveedor.cpp"
using namespace std;

Comprador::Comprador()
{
	nombreComprador = "";
}; 

Comprador::Comprador(string cNombreComprador, Producto cProducto)
{
	nombreComprador = cNombreComprador;
	producto = cProducto;
};

//GETTER
string Comprador::getNombreComprador()
{
	return nombreComprador;
};
Producto Comprador::getProducto()
{
	return producto;
};

//SETTER
void Comprador::setNombreComprador(string cNombreComprador) 
{
	nombreComprador = cNombreComprador;
};
void Comprador::setProducto(Producto cProducto)
{
	producto = cProducto;
}
/*void Comprador::comprarStock()
{
	//Producto producto1("Vasos", 200);
	//Proveedor proveedor1("Juanito", producto1, 5);
	int cantidad;
	cout << "Cantidad a comprar: " << endl;
	cin >> cantidad;

	if (cantidad <= proveedor1.getStock())
		cout << "Compra realizada con exito";
	else
		cout << "No se pudo realizar la compra";
};*/

//FUNCIONALIDAD


/*bool Comprador::comprarStock(int cComprarStock)
{
	if (comprarStock <= getStock())
		return true;
	else
		return false;

	//comprarStock = cComprarStock;

};*/
Comprador::~Comprador() {};
