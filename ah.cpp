#include "ah.h"

ah::ah(){
	AH = 0;
}

ah::ah(string elNombre) : registro(elNombre){
	setValor(0);
}

void ah::setAH(int ah){
	AH = ah;
}

int ah::getAH(){
	return AH;
}
