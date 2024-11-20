#include<stdio.h>
#include<conio.h>
int main()
{
	int cont, n=0, n2=1, valor;
	
		printf("Digite Um Valor:",cont);
		scanf("%d",& n);
		printf("Digite Mais Um Valor Para entrar na serie de Fibinacci:",cont);
	  printf("1: 1\n"); 
		 for(cont = 0; cont < n-1; cont++) { 
        valor = n + n2; 
        n = n2; 
        n2 = valor; 

	printf("%d\n", valor);
	printf("%d: %d\n", cont+2, valor);
}
}
