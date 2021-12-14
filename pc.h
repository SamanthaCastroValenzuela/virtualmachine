#ifndef PC_H
#define PC_H
#include "registro.h"
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class pc:public registro{
	private:
	//	Instruccion *in;
	int PC = 0;
	
	public:
		pc();
		~pc();
		pc(string elNombre);
		void setPC(int pc);
		int getPC();
};
#endif
