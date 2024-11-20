#include<stdio.h>
#include<conio.h>
int main()
{
	int cont,v,r;
	printf("Valor:");
	scanf("%d",&v);
	printf("Razao:");
	scanf("%d",&r);
	for(cont=1;cont<=10;cont++)
	{
		v=v+r;
		printf("%d\n",v);
	}
}
