#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 
double a, x, zn; 
int rik = 0; 

printf("\nVvedite symy vkladu: "); 
scanf("%lf", &x); 
printf("\nVvedite %%: "); 
scanf("%lf", &a); 

zn = x * 2; 

while(x < zn) { 
rik++; 
x = x + ((x / 100) * a); 
} 

printf("\nKolichestvo god: %d", rik); 
printf("\nVash vklad  = %lf", x); 

return 0; 
}
