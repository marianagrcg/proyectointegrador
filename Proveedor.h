#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Producto.h"
using namespace std;

/*vector<string> Proveedor;
vector<string> Proveedor(10);
vector<string> Proveedor{ "camisetas", "agujetas", "lapices", "espatulas", "cucharas","vasos", "plumas", "cepillos", "globos", "borradores"};*/


class Proveedor
{
	private:
		string nombreProveedor;
		Producto producto;
		int stock;
	public:
		//CONSTRUCTOR
		Proveedor();
		Proveedor(string cNombreProveedor, Producto cProducto, int cStock);

		//GETTERS
		string getNombreProveedor();
		Producto getProducto();
		int getStock();

		//SETTERS
		void setNombreProveedor(string cNombreProveedor);
		void setProducto(Producto cProducto);
		void setStock(int cStock);

		//FUNCIONALIDAD
		void imprimeStock();

		//DESTRUCTOR
		~Proveedor();

};
