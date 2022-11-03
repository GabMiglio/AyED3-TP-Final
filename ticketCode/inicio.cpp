//main
#include <iostream>
#include <ostream>
#include <vector>
#include "Cliente.h"
#include "GestorCliente.h"
using namespace std;

int main(){
    //Creacion de Clientes
GestorCliente e(0, "");
Cliente juan(4,"juan");
cout << "*** inicio ***" << juan.nombre << "***" << endl ;
e.agregarCliente(juan);
e.agregarCliente({1,"Jose"});
e.agregarCliente({3,"Marcelo"});
e.agregarCliente({6,"Juan"});
e.agregarCliente({5,"Beto"});
e.agregarCliente({2,"Pepe"});

 e.mostrarClientes() ;

vector<Cliente> RClientes;
RClientes = e.getClientes();

for( int i = 0; i < RClientes.size(); i++ )
			{
				std::cout << "Element[" << i << "] = " << RClientes[i].getNombre() << std::endl;
			}
			std::cout << std::endl;
int legajo;
cout << "introduzca el legajo" ;
cin >> legajo;
cout << "Busco: " << legajo << endl;
Cliente* p = e.buscarCliente(legajo);
if (p == nullptr) {
  // not found ...
  cout << "Lo siento no lo encontre" << endl;
} else {
  // use p->name etc.
  cout << "EL numero: " << legajo << "Se llama " << p->getNombre() << endl; 
}

    return 0;
}
