#include "MOV.h"

#include <iostream>


MOV::MOV(){ }

MOV::MOV(string nombre, int codigo, string elregistro, string ladireccion) : Instruccion(nombre, codigo){
	reg = elregistro;
	direccion = ladireccion;
}

void MOV::display(){
	cout<<reg<<", "<<direccion<<endl;
}

