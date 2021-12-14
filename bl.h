#ifndef BL_H
#define BL_H
#include "registro.h"
#include <iostream>
#include <cstring>

using namespace std;

class bl:public registro{
	private:
		int BL;
	
	public:
		bl();
		bl(string elNombre);
		void setBL(int bl);
		int getBL();
};
#endif
