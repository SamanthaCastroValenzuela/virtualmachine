#include "bh.h"

bh::bh(){
	BH = 0;
}

bh::bh(string elNombre) : registro(elNombre){
	setValor(0);
}

void bh::setBH(int bh){
	BH = bh;
}

int bh::getBH(){
	return BH;
}
