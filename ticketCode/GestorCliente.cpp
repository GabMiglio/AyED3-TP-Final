#ifndef GestorCliente_cpp
#define GestorCliente_cpp
#include <iostream>
#include <vector>
#include "GestorCliente.h"
#include "Cliente.h"

using namespace std;

GestorCliente :: GestorCliente (int DNI, string nombre){
    DNI = DNI;
    nombre = nombre;
}

int GestorCliente :: getDNI(){
    return DNI;
}
string GestorCliente :: getNombre(){
    return nombre;
}
vector<Cliente> GestorCliente ::  getClientes(){
    return clientes;
}

void GestorCliente :: setDNI (int nro){
    DNI = nro;
}
void GestorCliente :: setNombre (string nombre){
    nombre = nombre;
}

void  GestorCliente ::agregarCliente(Cliente e){
    cout << "***" << e.getNombre() << "***" << endl ;
    clientes.push_back(e);

}
void GestorCliente :: mostrarClientes(){
           
    		for( unsigned int i = 0; i < clientes.size(); i++ )
			{
				std::cout << "Element[" << i << "] = " << clientes[i].getNombre() << std::endl;
			}
			std::cout << std::endl;
};


 Cliente * GestorCliente ::  buscarCliente(int nro){
     for (int i=0 ; i< clientes.size(); i++){
         if (nro = clientes[i].getNro()){
             return &clientes[i];
             break;
         }
     }
     return nullptr;

 };
#endif