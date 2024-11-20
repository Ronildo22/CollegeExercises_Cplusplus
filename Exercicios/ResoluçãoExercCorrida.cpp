#include<stdio.h>
#include<conio.h>
int main()
{
	int nvr,nvl,cont; //nvr e nvl so pra conta a volta o numero da volta
	float volta,rapida=9000,lenta=0,media,acum=0;
	for(cont=1;cont<=7;cont++)
	{
	printf("Volta %d:",cont);
	scanf("%f",&volta);
	acum=acum+volta;
	if(volta<rapida){
		rapida=volta;
		nvr=cont;}
	if(volta>lenta){
		lenta=volta;
		nvl=cont;}
	}
	media=acum/7;
	printf("Tempo medio = %.2f\n",media);
	printf("Numero Volta mais rapida = %d\n",nvr);
	printf("Tempo Volta mais rapida = %.2f\n",rapida);
	printf("Numero Volta mais lenta = %d\n",nvl);
	printf("Tempo Volta mais lenta = %.2f\n",lenta);
}
