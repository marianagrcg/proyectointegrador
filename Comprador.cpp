#include "Comprador.h"
#include "Proveedor.h"
#include "Producto.h"
#include <string>
#include <iostream>
using namespace std;

Comprador::Comprador()
{
    nombreComprador = "";
    saldo = 0;
    cantidad = 0;
};

Comprador::Comprador(string cNombreComprador, Proveedor cProducto, double cSaldo, int cCantidad)
{
    nombreComprador = cNombreComprador;
    producto = cProducto;
    saldo = cSaldo;
    cantidad = cCantidad;
};

//GETTER
string Comprador::getNombreComprador()
{
    return nombreComprador;
};
Proveedor Comprador::getProducto()
{
    return producto;
};

double Comprador::getSaldo() {

    return saldo;

};

int Comprador::getCantidad() {
    
    return cantidad;
};

//SETTER
void Comprador::setNombreComprador(string cNombreComprador)
{
    nombreComprador = cNombreComprador;
};
void Comprador::setProducto(Proveedor cProducto)
{
    producto = cProducto;
}


void Comprador::setCantidad(int cCantidad) {

    cantidad = cCantidad;
};


// Funcionalidades

int Comprador::comprarStock(Proveedor p)
{
    //Producto producto1("Vasos", 200);
    //Proveedor proveedor1("Juanito", producto1, 5);
    cout << "Cantidad a comprar: ";
    cin >> cantidad;

    int a = p.getStock();
    if (cantidad <= a) {

        cout << "Compra realizada con exito" << endl;
        return a = (p.getStock() - cantidad);
    }
    else {
        cout << "No se pudo realizar la compra" << endl;
    }
    return a;
};

void Comprador::saldoActualizado( Producto g) {
    double saldoNuevo;
    saldoNuevo = (saldo - (cantidad * g.getPrecioProducto()));
    cout << "Saldo restante: $" << saldoNuevo << endl;
        
};

void Comprador::actualizarStock(Proveedor p) {
    cout << "Piezas compradas: " << cantidad << endl;
    cout << "Actualizacion de stock: " << (p.getStock() - cantidad) << endl;
};



Comprador::~Comprador() {};
