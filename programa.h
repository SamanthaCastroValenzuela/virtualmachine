#ifndef PROGRAMA_H
#define PROGRAMA_H
#include "Instruccion.h"
#include<string>

class programa{
	public:
		Instruccion *instrucciones[10];
		programa();
		void addInstruccion(Instruccion *laInstruccion, int laPosicion);
		Instruccion *getInstruccion(int laPosision);
};

#endif
