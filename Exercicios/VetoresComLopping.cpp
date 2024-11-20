#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<locale.h>
int main()
{
	int i=0; // igual a cont
float notas[5] = {7, 8, 9.5, 9, 5.5};
printf("Mostrando as 5 posicoes do Vetor\n");

while(i<=4){

printf("Notas[%d]: %.1f\n",i+1,notas[i]); //cont+1 para começar com 1 semm começa no 0. Como com 1 para ficar melhor para o usuario

i++;

}
getch();
}
