#include "iostream" 
#include "ctime" 
using namespace std; 
int main (){ 

int t=1, l=1, i, *tp = &t, *lp = &l; 
srand(time(0)); 
cout << "BANG!!!nY ARRANCAN!!!n"; 

if(*lp==*tp){ 
cout << "nnLa tortuga esta en la posicion "<< *tp; 
cout << "nLa liebre esta en la posicion "<< *lp; 
cout << "nOUCH!!!"; 
} 

while (t < 70 && l < 70){ 
i = 1 + rand() % 10; 

if(i<=5){ 
*tp += 3; 
cout << "nnLa tortuga esta en la posicion "<< *tp; 
if (i<=2) 
cout << "nLa liebre esta en la posicion "<< *lp; 
if (i>2 && i <=4){ 
*lp += 9; 
cout << "nLa liebre esta en la posicion "<< *lp; 
} 
if (i==5){ 
*lp -= 12; 
if(*lp < 1) 
*lp = 1; 
cout << "nLa liebre esta en la posicion "<< *lp; 
}//**** 
if(*lp==*tp) 
cout << "nOUCH!!!"; 
} 
if (i>5 && i<=8){ 
*lp+=1; 
cout << "nnLa liebre esta en la posicion "<< *lp; 
if (i<=7){ 
*tp -= 6; 
if(*tp < 1) 
*tp = 1; 
cout << "nLa tortuga esta en la posicion "<< *tp; 
}//****** 
if(*lp==*tp) 
cout << "nOUCH!!!"; 
} 
if (i >= 8 && i <= 10){ 
*tp+=1; 
cout << "nnLa tortuga esta en la posicion "<< *tp; 
if (i>=9){ 
*lp -=2; 
if(*lp < 1) 
*lp = 1; 
cout << "nLa liebre esta en la posicion "<< *lp; 
} 
if(*lp==*tp) 
cout << "nOUCH!!!"; 
} 
} 
if (t>=70) 
cout << "nnLA TORTUGA GANA!!! BRABO!!!n"; 
if (l>=70) 
cout << "nnLa liebre gana. Ni hablar.n"; 
if (l>=70 && t>=70) 
cout << "nnEs un empaten"; 


system("pause"); 
return 0; 
} 
