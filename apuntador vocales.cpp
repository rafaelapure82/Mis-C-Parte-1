#include <iostream>

using namespace std;

int cuenta_vocales(char *);

int main()

{
   char cadena[80];

   cout << "Introduce cadena: ";

   cin.getline(cadena, 80);  
 
   //en la llamada a la funcion se env�a 

  //el array de caracteres
   cout << "Numero de vocales: " << cuenta_vocales(cadena) << endl;

   system("pause");

}
int cuenta_vocales(char *s) //s contiene la direccion de inicio del array de caracteres
{
 int cont=0;
 while(*s) //mientras no llegue al nulo
 { 
    switch(toupper(*s)) //toupper pasa el car�cter a may�sculas para hacer la comprobaci�n. 
     {                          //el car�cter original no se modifica.
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':  cont++;
     }
     s++;
  }
  return cont;
}
