#include <iostream>
#include <string>
#include "Proveedor.h"
#include "Producto.h"
using namespace std;

Proveedor::Proveedor()
{
	nombreProveedor = "";
	stock = 0;

};
Proveedor::Proveedor(string cNombreProveedor, Producto cProducto, int cStock)
{
	nombreProveedor = cNombreProveedor;
	producto = cProducto;
	stock = cStock;
};

//GETTERS
string Proveedor::getNombreProveedor()
{
	return nombreProveedor;
};
Producto Proveedor::getProducto()
{
	return producto;
};
int Proveedor::getStock()
{
	return stock;
};

//SETTERS
void Proveedor::setNombreProveedor(string cNombreProveedor)
{
	nombreProveedor = cNombreProveedor;
};
void Proveedor::setProducto(Producto cProducto)
{
	producto = cProducto;
};
void Proveedor::setStock(int cStock)
{
	stock = cStock;
};

//FUNCIONALIDADES
void Proveedor::imprimeStock()
{
	Producto producto1("vaso", 2000);
	cout << "El stock es: " << stock <<endl;
	cout << "El precio unitario es: " << producto1.getPrecioProducto() << endl;
};

//DESTRUCTOR
Proveedor::~Proveedor() {};



