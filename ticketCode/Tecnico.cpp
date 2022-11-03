#ifndef Tecnico_cpp
#define Tecnico_cpp
//Tecnico.cpp
#include "Tecnico.h"
Tecnico :: Tecnico(int _nro,string _nombre){
    nro = _nro;
    nombre = _nombre;
}
int Tecnico ::  getNro() const{
    return nro;
}
string Tecnico :: getNombre() const{
    return nombre;
}
void Tecnico :: setNro(int nro){
    nro = nro;
}
void Tecnico :: setNombre(string nombre){
    nombre = nombre;
}

#endif


