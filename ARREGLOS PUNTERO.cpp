#include <iostream.h>
int main()
{
int *notas;
int i;
for(i=0 ; i<4; i++)
  cin>>*(notas+i);
for(i=0; i<4; i++)
  cout<<*(notas+i);

}
