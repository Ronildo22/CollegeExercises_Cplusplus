#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
int main(){
	setlocale(LC_ALL,"");
	int valorinicial=0,razao;
		printf("Digite um valor inicial:\n");
		scanf("%d",&valorinicial);
		printf("Digite uma raz�o para Progress�o Aritm�tica:\n");
		scanf("%d",&razao);
		sleep(1);
		printf("\n\nCarregando...");
		sleep(2);
		printf("\rPROGRESS�O ARITM�TICA:\n");
		for(int i=0;i<10;i++){
			sleep(1);
			printf("%d\n",valorinicial);
			valorinicial+=razao;
			}
	printf("\nFINALIZADO");
	}
