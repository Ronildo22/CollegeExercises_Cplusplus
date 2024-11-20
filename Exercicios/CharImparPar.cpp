#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<conio.h> //para o getch
#include<ctype.h> //para o toupper
#include<unistd.h> // para o setlocate
main()
{
	char continuar;
	int numero;
	setlocale(LC_ALL, "portuguese");
	do{
	system("cls");
	printf("Digite um numero:");
	scanf("%d",&numero);
	if(numero%2==0)
		printf("Numero par\n");
	else
		printf("Numero Impar\n");
	printf("Deseja continuar? s-Sim / n-Nao"); // o toupper para o scanf = continuar=toupper(continuar);
//	scanf("%c",&continuar); 
	continuar=toupper(getch()); // igual o de cima so q não precisa dar ENTER vai direto e Não Aparece o Sim Digitado
//	    tolower = Joga tudo em Minusculo | toupper = Joga Tudo em Maiuscula
	}while(continuar=='s');
	system("pause");
}
