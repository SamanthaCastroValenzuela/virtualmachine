#ifndef ADD_H
#define ADD_H
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class add:public Instruccion{
	private:
		int num1;
		int num2;
		int codigo;
	
	public:
		add();
		add(string elNombre, int elcodigo, int elNum1, int elNum2);
		int getNum1();
		int getNum2();
		int getCodigo();
};
#endif
