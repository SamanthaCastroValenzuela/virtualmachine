#ifndef RES_H
#define RES_H
#include "instruccion.h"
#include <iostream>
#include <cstring>

using namespace std;

class res:public Instruccion{
	private:
		int num1;
		int num2;
	
	public:
		res();
		res(string elNombre, int elcodigo, int elNum1, int elNum2);
		int getNum1();
		int getNum2();
};
#endif
