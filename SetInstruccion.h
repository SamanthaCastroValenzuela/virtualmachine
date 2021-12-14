#ifndef SETINSTRUCCION_H
#define SETINSTRUCCION_H
#include "Instruccion.h"

using namespace std;

class SetInstruccion{
	private:
		Instruccion set[10];
		short int index;
	public:
		SetInstruccion();
		void addInstruccion(Instruccion laInstruccion);
		Instruccion getInstruccion(short int pos);
		int Index();
};
#endif
