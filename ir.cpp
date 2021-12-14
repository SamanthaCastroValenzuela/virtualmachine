#include "ir.h"

ir::ir(){
	
}

ir::ir(string elNombre) : registro(elNombre){

}

int ir::getIR(){
	return IR;
}

void ir::setIR(int ir){
	IR = ir;
}
