#include <stdio.h>
#include <string.h> 
#include <conio.h>
int main ()
{
char a[15],b[15];
printf("Nome 1:");
gets(a);	
printf("Nome 2:");
gets(b);

strcpy(a,b);
printf("Nome = %s", a);
getch();
}
