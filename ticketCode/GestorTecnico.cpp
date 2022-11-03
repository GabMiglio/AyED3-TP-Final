#ifndef GestorTecnico_cpp
#define GestorTecnico_cpp
#include <iostream>
#include <vector>
#include "GestorTecnico.h"
#include "Tecnico.h"

using namespace std;

GestorTecnico :: GestorTecnico (int DNI, string nombre){
    DNI = DNI;
    nombre = nombre;
}

int GestorTecnico :: getDNI(){
    return DNI;
}
string GestorTecnico :: getNombre(){
    return nombre;
}
vector<Tecnico> GestorTecnico ::  getTecnicos(){
    return tecnicos;
}

void GestorTecnico :: setDNI (int nro){
    DNI = nro;
}
void GestorTecnico :: setNombre (string nombre){
    nombre = nombre;
}

void  GestorTecnico ::agregarTecnico(Tecnico e){
    cout << "***" << e.getNombre() << "***" << endl ;
    tecnicos.push_back(e);

}
void GestorTecnico :: mostrarTecnicos(){

    		for( unsigned int i = 0; i < tecnicos.size(); i++ )
			{
				std::cout << "Element[" << i << "] = " << tecnicos[i].getNombre() << std::endl;
			}
			std::cout << std::endl;
};


 Tecnico* GestorTecnico ::  buscarTecnico(int nro){
     for (int i=0 ; i< tecnicos.size(); i++){
         if (nro = tecnicos[i].getNro()){
             return &tecnicos[i];
             break;
         }
     }
     return 0;

 };
#endif
