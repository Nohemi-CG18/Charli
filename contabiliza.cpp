//Creado por: Ximena Nohemí Castillo Gonzales 
#include<iostream>
using namespace std;
int main()
{
	int XNCG_i=0,XNCG_l;
	float XNCG_x,XNCG_s=0;
	cout<<"ingrese el limite XNCG_l="; cin>>XNCG_l;
	do{

	cout<<"ingrese el numero XNCG_x="; cin>>XNCG_x;
	XNCG_i=XNCG_i+1;
	XNCG_s=XNCG_s+XNCG_x;



	}while(XNCG_i<XNCG_l);
	cout<<"Se ingresaron "<<XNCG_l<<" numeros "<< "que sumaron "<<XNCG_s<<endl;
	return 0;
}









