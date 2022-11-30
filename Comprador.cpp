#include "Comprador.hpp"
#include "Proveedor.hpp"
#include <string>
#include <iostream>
using namespace std;

Comprador::Comprador()
{
    nombreComprador = "";
};

Comprador::Comprador(string cNombreComprador, Proveedor cProducto)
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
void Comprador::comprarStock(Proveedor p)
{
    //Producto producto1("Vasos", 200);
    //Proveedor proveedor1("Juanito", producto1, 5);
    int cantidad;
    cout << "Cantidad a comprar: ";
    cin >> cantidad;
    
    
    if (cantidad <= p.getStock()){
        cout << "Compra realizada con exito"<<endl;
        cout<<"Stock actualizado: "<< (p.getStock() - cantidad)<<endl;
        
    }else{
            cout << "No se pudo realizar la compra"<<endl;}
    
};

Comprador::~Comprador() {};
