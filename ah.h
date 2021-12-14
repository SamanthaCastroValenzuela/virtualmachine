#ifndef AH_H
#define AH_H
#include "registro.h"
#include <iostream>
#include <cstring>

using namespace std;

class ah:public registro{
	private:
		int AH;
	
	public:
		ah();
		ah(string elNombre);
		void setAH(int ah);
		int getAH();
	
};
#endif
