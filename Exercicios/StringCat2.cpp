#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
char nome[10],sobre[10];
printf("Nome:");
gets(nome);
printf("Sobrenome:");
gets(sobre);
strcat(nome,sobre);
printf("Nome completo = %s\n", nome);
getch();
}

