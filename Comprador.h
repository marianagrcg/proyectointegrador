#pragma once
#include <iostream>
#include "Producto.h"
#include <string>
using namespace std;

class Comprador
{
private:
	string nombreComprador;
	Producto producto;
public:
	//CONSTRUCTOR
	Comprador();
	Comprador(string cNombreComprador, Producto cProducto);

	//GETTER
	string getNombreComprador();
	Producto getProducto();

	//SETTER
	void setNombreComprador(string cNombreComprador);
	void setProducto(Producto cProducto);
	
	//FUNCIONALIDAD
	//void comprarStock();
	//double precioProducto(Producto)

	//DESTRUCTOR
	~Comprador();
};