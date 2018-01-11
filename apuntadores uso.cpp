#include <iostream.h>
#include <stdlib.h>

/*
Programa de ejemplo del uso de apuntadores.
Compilado con Borland C++ 3.1 ( MS-DOS )
*/

int main( int argc, char *argv[] )
{
int *ipIntArray;
int iCount; // Variable para llevar la cuenta
// de los parámetros

if ( argc > 1 ) // Verificamos si hay parámetros
{
ipIntArray = new int[argc - 1]; // Asignamos memoria
iCount = 0;

while ( *argv )
{
*ipIntArray++ = atoi( *++argv ); // Convertir a entero, asignar
iCount++; // y recorrer el apuntador
}

while ( iCount-- > 0 )
{
cout << *--ipIntArray << ( char ) 0x20; // Retroceder el apuntador,
} // e imprimir el valor al
// que apunta

delete ipIntArray; // Liberar la memoria asignada
}

else // No hubo parámetros, mostrar
{ // información de cómo se usa
cout << "Usage: Pointers <integer argument list>" << endl;
cout << "Ej. Pointers 0 1 2 3 4 5" << endl;
cout << "Output: 5 4 3 2 1 0" << endl;
}
return 0;
