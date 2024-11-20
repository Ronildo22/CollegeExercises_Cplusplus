#include<stdio.h>
#include<conio.h>
int main()
{
	int n=1, cont=1, par=0, impar=0, mediapar, media, acum=0,acumpar=0;
	while(n>=0)
	{
		printf("Valor %d:",cont);
		scanf("%d",&n);
		acum=acum+n;
		if(n%2==0){
			par++;
			acumpar=acumpar+n;}
		else{
			impar++;}
		cont++;		
	}
	cont=cont-1;
	media=acum/cont;
	mediapar=acumpar/par;
	printf("Qtd impares = %d\n",impar);
	printf("Qtd pares = %d\n",par);
	printf("Media dos pares = %d\n",mediapar);
	printf("Media geral = %d",media);
}
