//Creado por: Ximena Nohemí Castillo Gonzales
#include<iostream>
using namespace std;
int main()
{
	float XNCG_x,XNCG_y,XNCG_s,XNCG_m,XNCG_d,XNCG_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de XNCG_x=:";
	cin>>XNCG_x;
	cout<<"Ingrese en valor de XNCG_y=:";
	//Operaciones 
	cin>>XNCG_y;
	XNCG_s=XNCG_x+XNCG_y;
	XNCG_m=XNCG_x*XNCG_y;
	XNCG_d=XNCG_x/XNCG_y;
	XNCG_r=XNCG_x-XNCG_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<XNCG_x<<" + "<<XNCG_y<<" = "<<XNCG_s<<endl;
	cout<<"Las multiplicacion de "<<XNCG_x<<" * "<<XNCG_y<<" = "<<XNCG_m<<endl;
	cout<<"Las division de "<<XNCG_x<<" / "<<XNCG_y<<" = "<<XNCG_d<<endl;
	cout<<"Las resta de "<<XNCG_x<<" - "<<XNCG_y<<" = "<<XNCG_r<<endl;
	return 0;
}
