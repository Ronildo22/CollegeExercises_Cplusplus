#include<stdio.h>
#include<conio.h>
int main()
{

int i, igual=0, maior=0, menor=0;
int vetores[5];
for(i=0;i<=5;i++){
	
	printf("Valor[%d]:",i);
	scanf("%d",&vetores[i]);}
	printf("__________________________\n");

	for(i=1;i<=5;i++){
	if(vetores[i]==vetores[0])
        menor++;
	if(vetores[i]>vetores[0])
		maior++;
	if(vetores[i]==vetores[0])
	igual++;

}
printf("Quantidade maiores que o primeiro= %d\n",maior);
printf("Quantidade menores que o primeiro= %d\n",menor);
printf("Quantidade igual que o primeiro= %d\n",igual);

		getch();
}


