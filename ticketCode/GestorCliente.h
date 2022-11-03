#ifndef GestorCliente_h
#define GestorCliente_h
#include <iostream>
#include <vector>
#include "Cliente.h"
using namespace std;

class GestorCliente{
    private:
        int DNI;
        string nombre;
        vector<Cliente> clientes;
        //   ^^^^^^^^ <--- 'Cliente' no punteros.
    public:
        GestorCliente(int,string);
        int getDNI();
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias- */
        string getNombre();
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias- */
        vector<Cliente> getClientes();

        void setDNI(int);
        void setNombre(string);
        // Añades UN Cliente, no tiene sentido que el nombre de la función sea en plural.
        void agregarCliente(Cliente );
        void mostrarClientes();
        Cliente *buscarCliente(int nro);
};
#endif