/*Programa: ejemplo
  Descripcion: Ejemplo de punteros a miembros de una clase
  Autor: Rafael Montenegro B.
  Universidad Nacional Experimental de los Llanos Occidentales "Ezequiel Zamora"
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class miclase
{
	public:
	  int sum;
	  void sumar(int x);
};

void miclase::sumar(int n)
{
  sum=0;
  for(int a=1;a<=n;a++)
	 {
		 sum+=a;
	 }
}

void main()
{
	miclase objeto,*po;   //po es el puntero al objeto
	int miclase::*dp;               //Puntero al dato miembro
	int num;
	void(miclase::*fp)(int num);      //Puntero la funcion miembro
	char repetir;
	do
	  {
	  cout<<"\t\t\t***Punteros a miembros de una clase***\n"<<endl;
	  cout<<"Sumatoria de numeros desde 1 hasta x:\n"<<endl;
	  cout<<"Ingrese un numero x: "<<endl;
	  cin>>num;
	  po=&objeto;
	  dp=&miclase::sum;
	  fp=miclase::sumar;
	  (po->*fp)(num);
	  cout<<"La suma desde 1 hasta "<<num<<" es igual a: "<<objeto.*dp<<endl;
	  cout<<"\nSi desea repetir digite cualquier tecla"<<endl;
	  cout<<"Caso contrario digite n:"<<endl;
	  cin>>repetir;
	  clrscr();
	  }while(repetir!='n');

}
