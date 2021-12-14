#include "Instruccion.h"
#include "registro.h"

#ifndef MOV_H
#define MOV_H
#include <string>

using namespace std;

class MOV : public Instruccion{
	private:
		string reg;
		string direccion;
	
	public:
		MOV();
		MOV(string nombre, int codigo, string elregistro, string ladireccion);
		void display();
};
#endif
