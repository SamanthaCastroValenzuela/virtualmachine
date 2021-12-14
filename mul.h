#ifndef MUL_H
#define MUL_H
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class mul:public Instruccion{
	private:
		int num1;
		int num2;
	
	public:
		mul();
		mul(string elNombre, int elcodigo, int elNum1, int elNum2);
		int getNum1();
		int getNum2();
};
#endif
