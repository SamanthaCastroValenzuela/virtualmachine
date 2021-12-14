#include "SetInstruccion.h"

using namespace std;

SetInstruccion::SetInstruccion(){
	index = 0;	
}

void SetInstruccion::addInstruccion(Instruccion laInstruccion){
	set[index++] = laInstruccion;
}

Instruccion SetInstruccion:: getInstruccion(short int pos){
	return set[pos];
}

int SetInstruccion::Index(){
	return index;
}
