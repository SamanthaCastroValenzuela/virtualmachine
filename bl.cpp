#include "bl.h"

bl::bl(){
	BL = 0;
}

bl::bl(string elNombre) : registro(elNombre){
	setValor(0);
}

void bl::setBL(int bl){
	BL = bl;
}

int bl::getBL(){
	return BL;
}
