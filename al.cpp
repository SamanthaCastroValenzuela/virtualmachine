#include "al.h"

al::al(){
	AL = 0;
}

al::al(string elNombre) : registro(elNombre){
	setValor(0);
}

void al::setAL(int al){
	AL = al;
}

int al::getAL(){
	return AL;
}
