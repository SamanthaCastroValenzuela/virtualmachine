#include "mbr.h"

mbr::mbr(){
	
}

mbr::mbr(string elNombre) : registro(elNombre){
	setValor(0);
}

int mbr::getMBR(){
	return Mbr;
}

void mbr::setMBR(int m){
	Mbr = m;
}
