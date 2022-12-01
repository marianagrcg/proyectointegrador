#ifndef Proveedor_h
#define Proveedor_h

#include <iostream>
#include <string>
#include "Proveedor.hpp"
#include "Producto.hpp"
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
void Proveedor::imprimeStock(Producto p)
{

    cout << "El stock de " << nombreProveedor << " es: " << stock << endl;
    cout << "El precio unitario por pieza es: " << "$" << p.getPrecioProducto() << endl;
};
#endif

//DESTRUCTOR
Proveedor::~Proveedor() {};
