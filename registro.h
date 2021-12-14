#ifndef REGISTRO_H
#define REGISTRO_H
#include <iostream>
#include <cstring>

using namespace std;
class registro{
	private:
		string nombre;
		int valor;
	
	public:
		registro();
		registro(string elNombre);
		int getValor();
		void setValor(int);
		string getNombre();
		void setNombre(string nom);
};
#endif
