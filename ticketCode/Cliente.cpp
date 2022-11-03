#ifndef Cliente_cpp
#define Cliente_cpp
//Cliente.cpp
#include "Cliente.h"
Cliente :: Cliente(int _nro,string _nombre){
    nro = _nro;
    nombre = _nombre;
}
int Cliente ::  getNro() const{
    return nro;
}
string Cliente :: getNombre() const{
    return nombre;
}
void Cliente :: setNro(int nro){
    nro = nro;
}
void Cliente :: setNombre(string nombre){
    nombre = nombre;
}
#endif

