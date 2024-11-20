#include <stdio.h>
#include <string.h>
#include <conio.h>
int main ()
{
int log,sen;
char login[10]="vitor",a[10],senha[10]="lala",b[10];
printf("Login:");
gets(a);
printf("Senha:");
gets(b);
log=strcmp(login,a);
sen=strcmp(senha,b);
if(log==0 && sen==0)
printf("Acesso Liberado ao sistema");
else
printf("Acesso Negado ao sistema");
getch();
}
