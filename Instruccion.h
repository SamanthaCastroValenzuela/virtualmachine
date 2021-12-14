#ifndef INSTRUCCION_H
#define INSTRUCCION_H
#include <string>

using namespace std;

class Instruccion{
	private:
		string nombre;
		int codigo;
		int longitud;
		
	public:
		Instruccion();
		Instruccion(string elNombre, int elCodigo);
		void display();
		int getCode();
		string getName();
};
#endif
