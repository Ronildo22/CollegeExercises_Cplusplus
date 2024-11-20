#include "stdio.h"
 
int main() { 
    int a, b, valor;
    int cont, n;
 
   
    a = 0; 
    b = 1; 
 
   
    printf("Digite Quantas Vezes Fazer:"); 

    scanf("%d", &n); 
    printf("Fibonacci:\n"); 
    printf("1: 1\n"); 
 
    for(cont = 0; cont < n-1; cont++) { 
        valor = a + b; 
        a = b; 
        b = valor; 
 
        printf("%d: %d\n", cont+2, valor); 
    }
}
