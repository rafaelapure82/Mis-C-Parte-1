#include<stdio.h>
#include<conio.h>
int main()
{
  int edad=0;
  printf("Cual es tu edad?: "); scanf("%d",&edad);
  if(edad>=18)
  {
    printf("Eres mayor de edad");
  }
  else
  {
    printf("Eres menor de edad");
  }
  getch();
}
