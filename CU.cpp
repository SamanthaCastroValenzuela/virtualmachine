#include "CU.h"

CU::CU(){
	estado = "inactivo";
	PC.setNombre("PC");
	ACC.setNombre("ACC");
	AH.setNombre("AH");
	AL.setNombre("AL");
	BH.setNombre("BH");
	BL.setNombre("BL");
	IR.setNombre("IR");
	MAR.setNombre("MAR");
	MBR.setNombre("MBR");
}

CU::CU(string elEstado){
	estado = elEstado;
}

void CU::print(){
	
	cout<<"PC  "<<PC.getPC()<<"    AL "<<AL.getAL()<<endl;
	cout<<"IR  "<<IR.getIR()<<"    IR "<<AH.getAH()<<endl;
	cout<<"ACC "<<ACC.getACC()<<"  ACC "<<BL.getBL()<<endl;
	cout<<"MAR "<<MAR.getMar()<<"  BH  "<<BH.getBH()<<endl;
	cout<<"MBR "<<MBR.getMBR()<<endl;
	
}

void CU::ciclo(programa elPrograma){
		Instruccion *instru;
	
	for(int i = 0; i < 3; i++){
		instru = fetch(elPrograma, i);
		int elcodigo = decode(instru);
		ejecutar(elcodigo, instru);
	}
}

Instruccion *CU::fetch(programa elPrograma, int laPosicion){
	
	cout<<"fetch"<<endl;
	int i;
	i = PC.getPC();
	MBR.setMBR(laPosicion);
	IR.setIR(MBR.getMBR());
	MAR.setMAR(i);
		
	print();

	PC.setPC(PC.getPC() + 1);
	return elPrograma.getInstruccion(laPosicion);
	
}

int CU::decode(Instruccion *laInstruccion){
	cout<<" "<<endl;
	cout<<"decode"<<endl;

	print();

	cout<<" "<<endl;
	return laInstruccion->getCode();
}

void CU::ejecutar(int elCodigo, Instruccion *laInstruccion){
	cout<<" "<<endl;
	cout<<"execute"<<endl;
	
	switch(elCodigo){
		case 50:
			if(laInstruccion->getName() == "add"){
				add *ptr_add = static_cast<add*>(laInstruccion);
				
				//cout<<ptr_add->getNum1()<<endl;
				//cout<<ptr_add->getNum2()<<endl;
				cout<<"Suma"<<endl;
				ACC.setACC(ula.add(ptr_add->getNum1(),ptr_add->getNum2()));
			//	cout<<"ACC: "<<ACC.getACC()<<endl;
			
			}	
			//cout<<"inicio del programa"<<endl;
			break;
		case 51:
			if(laInstruccion->getName() == "mul"){
				mul *ptr_mul = static_cast<mul*>(laInstruccion);
				
		//		cout<<ptr_mul->getNum1()<<endl;
		//		cout<<ptr_mul->getNum2()<<endl;
				cout<<"Multiplicacion"<<endl;
				ACC.setACC(ula.mul(ptr_mul->getNum1(),ptr_mul->getNum2()));
			//	cout<<"MUL: "<<ACC.getACC()<<endl;
			
			}	
			//cout<<"fin del programa"<<endl;
			break;
		case 52:
			if(laInstruccion->getName() == "res"){
				res *ptr_res = static_cast<res*>(laInstruccion);
				
		//		cout<<ptr_res->getNum1()<<endl;
		//		cout<<ptr_res->getNum2()<<endl;
				cout<<"Resta"<<endl;
				ACC.setACC(ula.res(ptr_res->getNum1(),ptr_res->getNum2()));
			//	cout<<"res: "<<ACC.getACC()<<endl;
			}	
		//	cout<<"mover"<<endl;
			break;
		default:
			break;
	}

	print();

	cout<<" "<<endl;
}





