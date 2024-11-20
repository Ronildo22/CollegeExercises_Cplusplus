#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int valores[10];
for(i=0;i<10;i++){
	printf("Valor[%d]:",i);
	scanf("%d",&valores[i]);}
	printf("__________________________\n");
for(i=0;i<10;i++){
	if(valores[i]%2==1)
	printf("Valor[%d]=%d\n",i,valores[i]);
}
getch();
}
