#pragma once
#include <iostream>
#include "Proveedor.hpp"
#include <string>
using namespace std;

class Comprador
{
private:
    string nombreComprador;
    Proveedor producto;
public:
    //CONSTRUCTOR
    Comprador();
    Comprador(string cNombreComprador, Proveedor cProducto);

    //GETTER
    string getNombreComprador();
    Proveedor getProducto();

    //SETTER
    void setNombreComprador(string cNombreComprador);
    void setProducto(Proveedor cProducto);
    
    //FUNCIONALIDAD
    void comprarStock(Proveedor);
    //double precioProducto(Producto)

    //DESTRUCTOR
    ~Comprador();
};
