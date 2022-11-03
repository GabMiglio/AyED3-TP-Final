#ifndef GestorTecnico_h
#define GestorTecnico_h
#include <iostream>
#include <vector>
#include "Tecnico.h"
using namespace std;

class GestorTecnico{
    private:
        int DNI;
        string nombre;
        vector<Tecnico> tecnicos;
        //   ^^^^^^^^ <--- 'Tecnico' no punteros.
    public:
        GestorTecnico(int,string);
        int getDNI();
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias- */
        string getNombre();
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias- */
        vector<Tecnico> getTecnicos();

        void setDNI(int);
        void setNombre(string);
        // Añades UN empleado, no tiene sentido que el nombre de la función sea en plural.
        void agregarTecnico(Tecnico );
        void mostrarTecnicos();
        Tecnico *buscarTecnico(int nro);
};
#endif
