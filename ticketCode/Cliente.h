//clase Cliente.h
#include <iostream>
#ifndef Cliente_h
#define Cliente_h
#include <string>
using namespace std;

class Cliente{
    private:
        int nro;
       
    public:
         string nombre;
        Cliente(int,string);

        // Es una función de lectura de datos, haz que sea constante.
        int getNro() const ;
        /* Es una función de lectura de datos, haz que sea constante y
           haz que devuelva una referencia (constante) para evitar copias. */
        string getNombre() const;

        void setNro(int);
        void setNombre(string);
/*
       friend  ostream &operator<<(ostream o, const Cliente e)
{
    return o << e.getNro() << 'h' << e.getNombre();
}
*/
};

#endif