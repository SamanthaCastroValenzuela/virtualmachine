#include "mul.h"

mul::mul(){
	
}

mul::mul(string elNombre, int elcodigo, int elNum1, int elNum2) : Instruccion(elNombre, elcodigo){

	num1 = elNum1;
	num2 = elNum2;
}
int mul::getNum1(){
	return num1;
}

int mul::getNum2(){
	return num2;
}
