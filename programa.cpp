#include "programa.h"

programa::programa(){
	
}

void programa::addInstruccion(Instruccion *laInstruccion, int laPosicion){
	instrucciones[laPosicion] = laInstruccion;
}

Instruccion *programa::getInstruccion(int laPosicion){
	return instrucciones[laPosicion];
}
