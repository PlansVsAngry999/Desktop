//Programa que aplica el teorema de pitagoras
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	char op;
	int rep;
	float a,b,c;
	do{
		system("cls");
		cout<<"--Teorema de pitagoras--"<<endl;
		cout<<"Cual es el valor que desconoce de su triangulo rectangulo?"<<endl;
		cout<<"c) Hipotenusa"<<endl;
		cout<<"a) Cateto adyacente"<<endl;
		cout<<"b) Cateto opuesto"<<endl;
		cout<<endl;
		cout<<"x) Salir"<<endl;
		cin>>op;
		cout<<endl;
		switch(op){
			case 'c':
				cout<<"//Calcular hipotenusa//"<<endl;
				cout<<"Ingrese el valor del cateto adyacente."<<endl;
				cin>>a;
				cout<<"Ingrese el valor del cateto opuesto."<<endl;
				cin>>b;
					c=sqrt((pow(a,2))+(pow(b,2)));
				cout<<endl;
				cout<<"La hipotenusa tiene un valor de: "<<c<<endl;
				cout<<endl;
				break;
			case 'a':
				cout<<"//Calcular cateto adyacente//"<<endl;
				cout<<"Ingrese el valor de la hipotenusa."<<endl;
				cin>>c;
				cout<<"Ingrese el valor del cateto opuesto."<<endl;
				cin>>b;
					a=sqrt((pow(c,2))-(pow(b,2)));
				cout<<endl;
				cout<<"El cateto adyacente tiene un valor de: "<<a<<endl;
				cout<<endl;
				break;
			case 'b':
				cout<<"//Calcular cateto opuesto//"<<endl;
				cout<<"Ingrese el valor de la hipotenusa."<<endl;
				cin>>c;
				cout<<"Ingrese el valor del cateto adyacente."<<endl;
				cin>>b;
					b=sqrt((pow(c,2))-(pow(a,2)));
				cout<<endl;
				cout<<"El cateto adyacente tiene un valor de: "<<b<<endl;
				cout<<endl;
				break;		
			case 'x':
				exit(0);
				break;
			default:
				cout<<"Error... Ingrese una letra del menu."<<endl;
				break;
		} //FIN SWITCH
		cout<<"[Repetir=1	Salir=0]"<<endl;
		cin>>rep;
	if(rep!=1){
		exit(0);}
	}while(rep==1);
	getch();
	return 0;
}
