//clase Tecnico.h
#include <iostream>
#ifndef Tecnico_h
#define Tecnico_h
#include <string>
using namespace std;

class Tecnico{
    private:
        int nro;

    public:
         string nombre;
        Tecnico(int,string);

        // Es una función de lectura de datos, haz que sea constante.
        int getNro() const ;
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias. */
        string getNombre() const;

        void setNro(int);
        void setNombre(string);
/*
       friend  ostream &operator<<(ostream o, const Tecnico e)
{
    return o << e.getNro() << 'h' << e.getNombre();
}
*/
};

#endif
