#include <stdio.h>
#include<conio.h>
 
int main()
{
int fator, n;
printf("Insira um Numero Para o Fatorial:");
scanf("%d", &n);
 
for(fator=1; n>1; n=n -1)
fator = fator * n;
 
printf("Fatorial: %d", fator);
}
