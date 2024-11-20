#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{

    int vetor[15], i = 1, maior = 0, menor = 0, posmaior = 1, posmenor = 1;

    printf("Digite o numero do vetor:\n");
    scanf("%d",&vetor[0]);
    maior = vetor[0];
    menor = vetor[0];
    for (;i <=14;i++){
    scanf("%d",&vetor[i]);
    if (vetor[i]> maior){
        maior = vetor[i];
        posmaior = i + 1;
    }
    if (vetor[i]< menor){
        menor = vetor[i];
        posmenor = i + 1;
    }

}
printf("\n O maior numero: %d e sua posicao e %d",maior,posmaior);
printf("\n O menor numero: %d e sua posicao e %d",menor,posmenor);
getch();
}
