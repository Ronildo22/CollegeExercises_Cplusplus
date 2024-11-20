#include<stdio.h>
#include<conio.h>
int main()
{
	int cont;
	float altura,menor=9, maior=0;
	for(cont=1;cont<=25;cont++)
	{
		printf("Altura Pessoa %d:",cont);
		scanf("%f",&altura);
		if(altura<menor)
			menor=altura;
		if(altura>maior)
			maior=altura;
	}
	printf("Menor altura %.2f\n",menor);
	printf("Maior altura %.2f\n",maior);
}
