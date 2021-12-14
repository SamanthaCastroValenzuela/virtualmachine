#ifndef CU_H
#define CU_H
#include <string>
#include <iostream>
#include "Instruccion.h"
#include "programa.h"
#include "pc.h"
#include "acc.h"
#include "ah.h"
#include "al.h"
#include "bh.h"
#include "bl.h"
#include "ir.h"
#include "mar.h"
#include "mbr.h"
#include "add.h"
#include "mul.h"
#include "res.h"
#include "registro.h"
#include "unidad_la.h"

using namespace std;
class CU{
	private:
		string estado;
		pc PC;
		acc ACC;
		ah AH;
		al AL;
		bh BH;
		bl BL;
		ir IR;
		mar MAR;
		mbr MBR;
		
		unidad_la ula;
		add ADD;
		
	public:
		CU();
		CU(string estado);
		Instruccion *fetch(programa elPrograma, int laPosicion);
		int decode(Instruccion *laInstruccion);
		void ejecutar(int elCodigo, Instruccion *laInstruccion);
		void ciclo(programa elPrograma);
		void print();
		
};

#endif
