#pragma once
#include <iostream>
#include "Proveedor.hpp"
#include "Producto.hpp"
#include "Comprador.hpp"
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
    double getSaldo(double cSaldo);
    int getCantidad();
    
    //SETTER
    void setNombreComprador(string cNombreComprador);
    void setProducto(Proveedor cProducto);
    void setSaldo(double cSaldo);
    void setCantidad();
    
    //FUNCIONALIDAD
    int comprarStock(Proveedor);
    //double precioProducto(Producto)
    double saldoActualizado(Producto);
    void actualizarStock(Proveedor);
    
    //DESTRUCTOR
    ~Comprador();
};
