#include <iostream>
#include <string>
#include <vector>
#include "Proveedor.h"
#include "Aplicacion.h"
using namespace std;

//COSNTRUCTOR

Aplicacion::~Aplicacion() {};

Aplicacion::Aplicacion()
{
	name = "";
};

Aplicacion::Aplicacion(string cName)
{
	name = cName;
};

string Aplicacion::getName()
{
	return name;
}
void Aplicacion::setName(string cName)
{
	name = cName;
};

Proveedor Aplicacion::getProveedor()
{
	return Proveedor();
};
void Aplicacion::setProveedor(string cNombreProveedor, Producto cProducto, int cStock)
{
	Proveedor prov(cNombreProveedor, cProducto, cStock);
	proveedores.push_back(prov);
};

Comprador Aplicacion::getComprador()
{
	return Comprador();
};
void Aplicacion::setComprador(string cNombreComprador, Proveedor cProducto, double cSaldo, int cCantidad)
{
	Comprador comp(cNombreComprador, cProducto, cSaldo, cCantidad);
	compradores.push_back(comp);
};
