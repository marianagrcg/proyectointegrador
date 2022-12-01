#ifndef Aplicacion_h
#define Aplicacion_h
#include "Producto.h"
#include <iostream>
#include <string>
#include <vector>
#include "Proveedor.h"
#include "Aplicacion.h"
#include "ostream"
using namespace std;

//COSNTRUCTOR


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
};
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

void Aplicacion::printproveedor() {
	cout << endl << "Empleados -------" << endl;
	for (int i = 0; i < proveedores.size(); i++) {
		cout << proveedores[i].getNombreProveedor() << " " << endl;
		//proveedores[i].getProducto() << " " << 
		//proveedores[i].getStock() << " " << endl;


	}


};

void Aplicacion::printcomprador() {
	cout << endl << "Empleados -------" << endl;
	for (int i = 0; i < compradores.size(); i++) {
		cout << compradores[i].getNombreComprador() << " " << endl;
		//compradores[i].getProducto() << " " << 
		//compradores[i].getSaldo() << " " << 
		//compradores[i].getCantidad() << endl;


	}


};
#endif

Aplicacion::~Aplicacion() {};
