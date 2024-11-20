#include<stdio.h>
#include<conio.h>
int main()
{
    int vet[10],i,negativos=0,somapositivos=0;
    for(i=0;i<10;i++){
        printf("Digite um valor [%i]:",i);
        scanf("%d",&vet[i]);
        if(vet[i]>=0)
        somapositivos=somapositivos+vet[i];
        else
            negativos++;
        }


        printf("Quantidade positivos=%d\n",somapositivos);
        printf("Quantidade negativos=%d\n",negativos);

    getch();
}
