#include<stdio.h>
#include<conio.h>
int main()
{
	int cont;
	float volta,rapido=9000,lento=0,media,acum=0;
	for(cont=1;cont<=7;cont++)
{
	
	printf("Tempo da Volta %d:",cont);
	scanf("%f",&volta); //%f por causa do float
	acum=acum+volta;
	media=acum/7;
		if(volta<rapido){
	    rapido=volta;
		if(volta>lento){
		 lento=volta;   
	}
	
	
}

}
    printf("Volta mais rapida= %.2f\n", rapido);
    printf("Volta mais Lenta= %.2f\n", lento);
	printf("tempo Medio Por Volta= %.2f\n", media);
}

