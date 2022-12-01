#pragma once
#include <iostream>
#include "Proveedor.h"
#include "Producto.h"
#include <string>
using namespace std;

class Comprador
{
private:
    string nombreComprador;
    Proveedor producto;
    double saldo;
    int cantidad;

public:
    //CONSTRUCTOR
    Comprador();
    Comprador(string cNombreComprador, Proveedor cProducto, double cSaldo, int cantidad);

    //GETTER
    string getNombreComprador();
    Proveedor getProducto();
    double getSaldo();
    int getCantidad();

    //SETTER
    void setNombreComprador(string cNombreComprador);
    void setProducto(Proveedor cProducto);
    void setSaldo(double cSaldo);
    void setCantidad(int cCantidad);

    //FUNCIONALIDAD
    int comprarStock(Proveedor);
    //double precioProducto(Producto)
    void saldoActualizado(Producto);
    //Funcion actualizar
    void actualizarStock(Proveedor);

    //DESTRUCTOR
    ~Comprador();
};
