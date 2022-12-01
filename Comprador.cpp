#include "Comprador.hpp"
#include "Proveedor.hpp"
#include "Producto.hpp"
#include <string>
#include <iostream>
using namespace std;

Comprador::Comprador()
{
    nombreComprador = "";
};

Comprador::Comprador(string cNombreComprador, Proveedor cProducto, double cSaldo, int cCantidad)
{
    nombreComprador = cNombreComprador;
    producto = cProducto;
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

//SETTER
void Comprador::setNombreComprador(string cNombreComprador)
{
    nombreComprador = cNombreComprador;
};
void Comprador::setProducto(Proveedor cProducto)
{
    producto = cProducto;
}
int Comprador::comprarStock(Proveedor p)
{
    //Producto producto1("Vasos", 200);
    //Proveedor proveedor1("Juanito", producto1, 5);
    cout << "Cantidad a comprar: ";
    cin >> cantidad;

    int a= p.getStock();
    if (cantidad <= a){

        cout << "Compra realizada con exito"<<endl;
        return a=(p.getStock() - cantidad);
    }else{
            cout << "No se pudo realizar la compra"<<endl;}
            return a;
};

double Comprador:: saldoActualizado(Producto g){
    return (saldo - (cantidad * g.getPrecioProducto()));
};
Comprador::~Comprador() {};

