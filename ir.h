#ifndef IR_H
#define IR_H
#include "registro.h"
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class ir:public registro{
	private:
		int IR;
	
	public:
		ir();
		ir(string elNombre);
		
		int getIR();
		void setIR(int ir);
	
};
#endif
