#include <iostream>
#include <string>
#include <vector>
#include "Proveedor.hpp"
#include "Comprador.hpp"
#include "Producto.hpp"
using namespace std;


int main()
{
    //vector<Proveedor> proveedores;
    
    Producto producto1("Vasos",120);
    
    Proveedor proveedor1("Juanito", producto1, 5);
    
    Comprador comprador1("Daniela",proveedor1,1000,0);
    
    proveedor1.imprimeStock(producto1);
    
    comprador1.comprarStock(proveedor1);
    
    comprador1.saldoActualizado(producto1);
  
}
