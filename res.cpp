#include "res.h"

res::res(){
	
}

res::res(string elNombre, int elcodigo, int elNum1, int elNum2) : Instruccion(elNombre, elcodigo){

	num1 = elNum1;
	num2 = elNum2;
}
int res::getNum1(){
	return num1;
}

int res::getNum2(){
	return num2;
}
