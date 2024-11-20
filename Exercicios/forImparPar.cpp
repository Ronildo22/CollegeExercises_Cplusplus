#include<stdio.h>
#include<conio.h>
int main()
{
	int cont,par=0,impar=0,n;
	for(cont=1;cont<=5;cont++)
	{
		printf("Numero %d:",cont);
		scanf("%d",&n);
		if (n%2==0){
			par++;}
		else{
			impar++;}
	}
	printf("Pares= %d\n",par);
	printf("Impares= %d\n",impar);

