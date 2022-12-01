#pragma once
#include <iostream>
#include <string>
#include "Producto.h"
#include "Proveedor.h"
#include "Comprador.h"
using namespace std;

class Aplicacion
{
private:
	string name;
	vector <Proveedor> proveedores;
	vector <Comprador> compradores;
public:
	//CONSTRUCTOR
	Aplicacion();
	Aplicacion(string cName);

	string getName();
	Proveedor getProveedor();
	Comprador getComprador();

	void setName(string cName);
	void setProveedor(string cNombreProveedor, Producto cProducto, int cStock);
	void setComprador(string cNombreComprador, Proveedor cProducto, double cSaldo, int cCantidad);

	void printproveedor();
	void printcomprador();


	~Aplicacion();

};
