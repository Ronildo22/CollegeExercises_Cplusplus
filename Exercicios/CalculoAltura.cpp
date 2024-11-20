#include<stdio.h>
#include<conio.h>
int main()
{
	float cont=1, altura=0, acum=0, maior=99999, menor=0;
	for(cont=1;cont<=5;cont++)
	{
		printf("Digite uma altura %.0f:",cont);
		scanf("%f",&altura);
		acum=acum+altura;
   if(altura<maior){
	    maior=altura;
		if(altura>menor){
		 menor=altura;   
	}
	}

}

	printf("Maior Altura: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
}
