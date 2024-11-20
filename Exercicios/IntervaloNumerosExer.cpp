#include<stdio.h>
#include<conio.h>
int main()
{
	int cont=1,interv1=0, interv2=0, interv3=0, interv4=0, acum=0, n=0;
	while(n>=0)
	{
		printf("Digite Valores inteiros menores que cem %d:",cont);
		scanf("%d",&n);
		acum=acum+n;
	if(n>=0&&n<=25){
			interv1++;}
	if(n>=26&&n<=50){
		     interv2++;}
	if(n>=51&&n<=75){
		     interv3++;}
	if(n>=76&&n<=100){
		     interv4++;}
		     cont++;
	}

	

	printf("Quantos numeros forram digitados entre 0 e 25; %d\n", interv1);
		printf("Quantos numeros forram digitados entre 26 e 50; %d\n", interv2);
			printf("Quantos numeros forram digitados entre 51 e 75; %d\n", interv3);
				printf("Quantos numeros forram digitados entre 76 e 100; %d\n", interv4);
}
