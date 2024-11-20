#include<stdio.h>
#include<conio.h>
#include<locale.h>
int main(void)
{
	setlocale(LC_ALL,"Portuguese");
  int idade, idadeacum ,resp=0,cont=0;
  float porcenCC, porcenSI, porcen25,porcen25acum, CC=0, SI=0, candi=0;
  

     
     
    while(cont!=candi);{
    	
    printf("Digite o Número de Candidatos\n");
     scanf("%f",&candi);
     
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
cont++;

if(resp==1 && idade<=25){
porcen25acum++;
}
}
porcenCC=(CC*100)/candi;
porcenSI=(SI*100)/candi;
porcen25=(porcen25acum*100)/CC;
   	printf("Porcentagem de Candidatos Em CC =%.2f\n",porcenCC);
   	printf("Porcentagem de Canditados em SI =%.2f%\n",porcenSI);
    printf("Quantidade de Canditados Com Mais de 50 anos= %d\n",idadeacum);
    printf("Porcentagem de Candidatos com menos de 25 anos em CC= %2.f%\n",porcen25);
  
  return 0;
}

