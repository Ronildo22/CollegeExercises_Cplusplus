#include<stdio.h>
#include<conio.h>
int main()
{
	int cont=1, positivo=0, negativo=0, num=0;
	float media, proceP, proceN, acum=0;
	 while(num!=10)
{
		printf("Digite um numero %d:",cont++);
	scanf("%d",&num); 
	acum=acum+num;
		if (num>=0)
			positivo++;
		else
			negativo++;
		}
		
		media=acum/cont;
	
proceP=(positivo/cont)*100;
proceN=(negativo/cont)*100;
    printf("Media de numeros resebidos = %.2f\n", media);
    printf("Numeros positivos = %d\n", positivo);
    printf("Numeros negativos = %d\n", negativo);
	printf("Porcentagem de numeros positivos= %.2f\n", proceP);
	printf("Porcentagem de numeros negativos= %.2f\n", proceN);

}

