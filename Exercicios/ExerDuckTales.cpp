
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    int cont=1,huguinho=0,zezinho=0,luizinho=0,branco=0;
    setlocale(LC_ALL, "portuguese");
    do{
    //	system("color i"); Aparece todas as opções de cores
//      system("color FA"); Muda o fundo e a Letra 1-Fundo. 2-Letra
    	 system("cls");
    printf("Opcoes de voto:\n\n1-Huguinho\t2-Zezinho\n3-Luizihno\t0-Voto Branco\n");
    scanf("%d",& voto);
        if(voto==1){
        huguinho++;}
        else if(voto==2){
        zezinho++;}
        else if(voto==3){
        luizinho++;}
        else if(voto==0){
            branco++;}
    
}while(voto<=3);



system("cls");

printf("...Computando Votos...");
 sleep(1);
 system("cls");

    printf("\nHuguinho = %d\n",huguinho);
    printf("Zezinho = %d\n",zezinho);
    printf("Luizihno = %d\n",luizinho);
    printf("Em branco = %d\n",branco);
 system("pause");
    getch();
}






