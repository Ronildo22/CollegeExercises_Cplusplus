#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<locale.h>
int main() 
{
	int i; // igual a cont
	int leitor=0;
	float notas[5]={5.5,7,5.8,10,8};


for(i=0;i<=4;i++){

printf("Mostradno A Nota %d Digite qualquer Numero\n",i+1);
scanf("%d",&leitor);

printf("Mostrando a Nota %d = %.1f \n",leitor, notas[i]);

}
getch();
}




