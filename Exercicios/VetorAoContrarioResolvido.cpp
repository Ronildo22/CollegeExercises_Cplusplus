#include<stdio.h>
#include<conio.h>
int main()
{
	int vet[20],i,n;
	printf("Quantos numeros quer digitar?");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Numero %d:",i+1);
		scanf("%d",&vet[i]);}
	for(i=n-1;i>=0;i--){
		printf("%d\n",vet[i]);
	}	
	getch();
}

