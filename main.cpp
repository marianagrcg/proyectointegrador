#include <iostream>
#include <string>
#include <vector>
#include "Proveedor.h"
#include "Comprador.h"
#include "Producto.h"
#include "Aplicacion.h"
using namespace std;


int main()
{
	
	Aplicacion app("ONLINESHOP");
	int option = 0;

	cout << "Ingresa la opcion que deseas realizar \n 1- Agregar Preveedor. \n 2- Agregar Comprador. \n 3-Para salir" << endl;
	cin >> option;
	
	
	while (option == 1 || option == 2)
	{
		if (option == 1) {
			//DATOS PROVEEDOR
			cout << "Ingresa el nombre del Proveedor: ";
			string nombreProveedor;
			cin >> nombreProveedor;

			//Producto
			cout << "Ingresa nombre producto: ";
			string nombreProducto;
			cin >> nombreProducto;

			cout << "Ingresa el precio del producto: ";
			double precioProducto;
			cin >> precioProducto;

			Producto producto(nombreProducto, precioProducto);

			cout << "Ingresa stock: ";
			int stock;
			cin >> stock;

			app.setProveedor(nombreProveedor, producto, stock);
			cout << "Ingresa la opcion que deseas realizar \n 1- Agregar Preveedor. \n 2- Agregar Comprador. \n 3-Para salir" << endl;
			cin >> option;

		}
		

		else {
			//DATOS COMPRADOR
			cout << "Ingresa el nombre del Comprador: ";
			string nombreComprador;
			cin >> nombreComprador;

			cout << "Ingresa saldo: ";
			double saldo;
			cin >> saldo;

			cout << "Ingresa la cantidad a comprar: ";
			int cantidad;
			cin >> cantidad;

			app.setComprador(nombreComprador, app.getProveedor(), saldo, cantidad);

			cout << "Ingresa la opcion que deseas realizar \n 1- Agregar Preveedor. \n 2- Agregar Comprador. \n 3-Para salir" << endl;
			cin >> option;
		}
			

	}
	
	


	
	/*vector<Proveedor> proveedores;

	Producto producto1("Vasos", 500);

	Proveedor proveedor1("Juanito", producto1, 5);

	//Nombre   //proveedor  //saldo //cantidad  
	Comprador comprador1("Daniela", proveedor1, 10000, 4);

	proveedor1[0].imprimeStock(producto1);

	comprador1[0].comprarStock(proveedor1);

	comprador1[0].saldoActualizado(producto1);

	comprador1[0].actualizarStock(proveedor1);*/

}
