#ifndef MAR_H
#define MAR_H
#include "registro.h"
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class mar:public registro{
	private:
		int MAR;
	
	public:
		mar();
		mar(string elNombre);
	
		void setMAR(int ma);
		int getMar();
};
#endif
