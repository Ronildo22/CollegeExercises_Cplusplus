#include <stdio.h>
#include <conio.h>
int main ()
{
  int numero;
  printf("Digite um numero: ");
  scanf("%d",&numero);
  numero >= 0 ? numero++ : numero--; //?= if       :else
  printf("O novo valor de numero e: %d",numero);
  getch();
  }
