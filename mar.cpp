#include "mar.h"

mar::mar(){
	
}

mar::mar(string elNombre) : registro(elNombre), MAR(0){
	
}

int mar::getMar(){
	return MAR;
}

void mar::setMAR(int ma){
	MAR = ma;
}
