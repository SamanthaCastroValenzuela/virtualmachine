#include "unidad_la.h"
#include <iostream>

using namespace std;
int unidad_la::add(int elNum1, int elNum2){
	num1 = elNum1;
	num2 = elNum2;
	register int add;
	
	__asm__( "addl %%ebx, %%eax;"
		 : "=a" (add)
		 : "a" (elNum1), "b" (elNum2)
        );
        
       // cout<<add<<endl;
        return add;
}

int unidad_la::mul(int elNum1, int elNum2){
	num1 = elNum1;
	num2 = elNum2;
	register int mul;
	
		__asm__( "imull %%ebx, %%eax;"
		 : "=a" (mul)
		 : "a" (elNum1), "b" (elNum2)
        );
        
        return mul;
}

int unidad_la::div(int elNum1, int elNum2){
	num1 = elNum1;
	num2 = elNum2;
	register int div;
	register int aux;
	
/*	__asm__ ( "movl $0x0, %%edx;"
					 "movl %10, %%eax;"
					 "movl %10, %%ebx;"
					 "idivl %%ebx;" : "=a" (aux), "=d" (div) : "a" (elNum1), "b" (elNum2) );*/
					 
					return aux;
}

int unidad_la::res(int elNum1, int elNum2){
	num1 = elNum1;
	num2 = elNum2;
	register int res;
	
	__asm__( "subl %%ebx, %%eax;"
		 : "=a" (res)
		 : "a" (elNum1), "b" (elNum2)
        );
        
        return res;
}

