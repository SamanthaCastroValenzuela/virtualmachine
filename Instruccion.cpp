#include "Instruccion.h"
#include <iostream>

using namespace std;
Instruccion::Instruccion(){ } 

Instruccion::Instruccion(string elNombre, int elCodigo){
	nombre = elNombre;
	codigo = elCodigo;
}

void Instruccion::display(){
	cout<<nombre<<", "<<codigo<<", "<<longitud<<endl;
}

int Instruccion::getCode(){
	return codigo;
}

string Instruccion::getName(){
	return nombre;
}
