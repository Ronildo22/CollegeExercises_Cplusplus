#include<stdio.h>  
#include<string.h> 
#include<conio.h> 
int main() { 
  char string_nome[20]; 
//  char[2] [17]; linha e coluna - Se quiser  usar 2 string.

  printf("\n\t DIGITE UM NOME: ");
  gets(string_nome); // tipo um scanf so pra string(char). 
  printf("\n\t O nome digitado eh:%s\n",string_nome); 
  printf("\n A string_nome digitada tem %d letras",strlen(string_nome));
//  strlen(string_nome)); // Lê o tamanho da string(char)
getch();
}
