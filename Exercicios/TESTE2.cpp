#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
  int idade, CC=0, SI=0 ,candi=0, idadeacum ,resp=0,cont=0;
  float porcenCC, porcenSI;
  

     
     
    for(cont=1;cont<=5;cont++);{
    	
    printf("Digite o Número de Candidatos\n");
     scanf("%d",&candi);
     
    printf("Digite 1 Para CC ou 2 Para SI\n");
    scanf("%d",&resp);

    if (resp==1){
    	CC++;}
    else if(resp==2){
    	SI++;
	}
    printf("Idade do Canditado:\n");
    scanf("%d",&idade);
     

if (idade>=50){
	idadeacum++;
}

}

porcenCC=(CC*100)/candi;
porcenSI=(candi*100)/candi;
   	printf("Porcentagem de Candidatos Em CC =%.2f\n",porcenCC);
   	printf("Porcentagem de Canditados em SI =%.2f\n",porcenSI);
    printf("Quantidade de Canditados Com Mais de 50 anos= %d\n",idadeacum);
   // printf("Porcentagem de Candidatos com menos de 25 anos em CC= %d\n",porcen25);
  
  return 0;
}

