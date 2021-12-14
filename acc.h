#ifndef ACC_H
#define ACC_H
#include "registro.h"
#include <iostream>
#include <cstring>

using namespace std;

class acc:public registro{
	private:
		int ACC;
	
	public:
		acc();
		acc(string elNombre);
		int getACC();
		void setACC(int acc);
};
#endif
