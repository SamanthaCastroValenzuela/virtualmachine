#include "registro.h"

registro::registro(){
	
}

registro::registro(string elNombre){
	nombre = elNombre;
}

string registro::getNombre(){
	return nombre;
}

void registro::setNombre(string nom){
	nombre = nom;
}

int registro::getValor(){
	return valor;
}

void registro::setValor(int val){
	valor = valor;
}
