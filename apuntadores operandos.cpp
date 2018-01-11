//Apuntadores y operandos '*' y '&'
#include <iostream>
using std::cout;
using std::endl;
int main()
{
  int x;
  int y;
  int *ptrEntero;
  int *ptr2Entero;
  ptrEntero = &x;
  ptr2Entero = &y;
  *ptrEntero = 1;
  *ptr2Entero = 5;
  cout << "El valor de x es: " << x << endl;
  *ptrEntero += 5;
  cout << "El valor de x, luego de incrementar 5 a *ptrEntero, es: " << x << endl;
  cout << "El valor de y es: " << y << endl;
  cout << "El valor de &y es: " << &y << endl;
  cout << "El valor de ptr2Entero es: " << ptr2Entero << endl;
  cout << "El valor de *ptr2Entero es: " << *ptr2Entero << endl;
  cout << "El valor de &ptr2Entero es: " << &ptr2Entero << endl;
  cout << "El valor de &*ptrEntero es: " << &*ptrEntero << " y el valor de *&ptrEntero es: " << *&ptrEntero << endl;
  cout << "FIN DEL PROGRAMA :)" << endl;
  return 0;
}
