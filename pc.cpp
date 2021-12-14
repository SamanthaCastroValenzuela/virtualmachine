#include "pc.h"

pc::pc(){
	
}

pc::~pc(){
	
}

pc::pc(string elNombre) : registro(elNombre), PC(0){
	
}

void pc::setPC(int pc){
	PC = pc;
}

int pc::getPC(){
	return PC;
}
