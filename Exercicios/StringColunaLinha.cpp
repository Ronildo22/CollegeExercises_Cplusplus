#include<stdio.h>
#include<conio.h>
int main() {
  char nomes[2][17]; // linha e coluna - Se quiser  usar 2 string.
  int i;
  printf("\n\t Digite as strings: \n");
  for(i=1; i<=2; i++)
    {
      printf("string %d:",i);
      gets(nomes[i]);   }
    printf("\n Os nomes são: \n");
    
   for(i=1; i<=2; i++)
      {
         printf("\n %s \n",nomes[i]);
       }
getch();
}
