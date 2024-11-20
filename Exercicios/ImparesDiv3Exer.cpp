#include<stdio.h>
#include<conio.h>
int main()
{
	int n=1, soma;
	
	while(n>= 1&& n<=500)
	{
	if(n%3==0){
		soma=soma+n;
		printf("%d\n",n);
	}
	n++;
}
    printf("Soma=%d\n",soma-1);
}

	
