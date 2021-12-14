#include "add.h"

add::add(){
	
}

add::add(string elNombre, int elcodigo, int elNum1, int elNum2) : Instruccion(elNombre, elcodigo){

	num1 = elNum1;
	num2 = elNum2;
	codigo = elcodigo;
}
int add::getNum1(){
	return num1;
}

int add::getNum2(){
	return num2;
}

int add::getCodigo(){
	return codigo;
}


