#include <stdlib.h>
#include <iostream>
#include "Instruccion.h"
#include "programa.h"
#include "MOV.h"
#include "CU.h"
#include "registro.h"


using namespace std;
int main(int argc, char** argv) {
	
	CU cu;
	programa pro;
	Instruccion a;
	res *re = new res("res", 52, 10, 10);
	pro.addInstruccion(re, 0);
	mul *mu = new mul("mul", 51, 1, 1);
	pro.addInstruccion(mu, 1);
	add *ad = new add("add", 50, 4, 4);
	pro.addInstruccion(ad, 2);
	
	cu.ciclo(pro);	

	
	return 0;
	

}
