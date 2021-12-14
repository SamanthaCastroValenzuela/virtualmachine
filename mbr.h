#ifndef MBR_H
#define MBR_H
#include "registro.h"
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class mbr:public registro{
	private:
		int Mbr;
	public:
		mbr();
		mbr(string elNombre);
		int getMBR();
		void setMBR(int m);
		
};
#endif
