#include <iostream>
#include <string>
#include <vector>
#include "Proveedor.h"
#include "Comprador.h"
#include "Producto.h"
using namespace std;


int main()
{
    //vector<Proveedor> proveedores;

    Producto producto1("Vasos", 500);

    Proveedor proveedor1("Juanito", producto1, 5);

                        //Nombre   //proveedor  //saldo //cantidad  
    Comprador comprador1("Daniela", proveedor1, 10000, 4);

    proveedor1.imprimeStock(producto1);

    comprador1.comprarStock(proveedor1);

    comprador1.saldoActualizado(producto1);

    comprador1.actualizarStock(proveedor1);
}
