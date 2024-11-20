#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
char login[10] , senha[10];
printf("Login:");
gets(login);
printf("Senha:");
gets(senha);
if(strcmp(login,senha)==0)
printf("Sao iguais");
else
printf("Sao diferentes");
getch();
}
