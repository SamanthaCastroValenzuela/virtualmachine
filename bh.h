#ifndef BH_H
#define BH_H
#include "registro.h"
#include <iostream>
#include <cstring>

using namespace std;

class bh:public registro{
	private:
		int BH;
	
	public:
		bh();
		bh(string elNombre);
		void setBH(int bh);
		int getBH();
		
};
#endif
