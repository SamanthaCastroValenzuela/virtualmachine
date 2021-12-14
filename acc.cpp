#include "acc.h"

acc::acc(){

}

acc::acc(string elNombre) : registro(elNombre){
	setValor(0);
}

int acc::getACC(){
	return ACC;
}

void acc::setACC(int acc){
	ACC = acc;
}
