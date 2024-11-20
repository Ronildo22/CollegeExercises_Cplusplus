#include<stdio.h>
#include<conio.h>
int main()
{
	int n,cont,r;
	printf("Numero:");
	scanf("%d",&n);
	for(cont=0;cont<=10;cont++)
	{
	r=n*cont;
	printf("%d x %d= %d\n" n,cont,r);// na ordem que aparece os %d
	}
}

	

