#ifndef AL_H
#define AL_H
#include "registro.h"
#include <iostream>
#include <cstring>

using namespace std;

class al:public registro{
	private:
		int AL;
	
	public:
		al();
		al(string elNombre);
		void setAL(int al);
		int getAL();
		
};
#endif
