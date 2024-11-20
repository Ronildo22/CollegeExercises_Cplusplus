#include<stdio.h>
#include<conio.h>
int main()
{
	float cont=1,media, acum=0, pos=0, neg=0, porpos, porneg,n=0;
	while(n!=10)
	{
		printf("Valor %.0f:",cont);
		scanf("%f",&n);
		acum=acum+n;
		if(n>=0)
			pos++;
		else
			neg++;
		cont++;
	}
cont=cont-1;
	media=acum/cont;
	printf("Media dos valores digitados %.2f\n",media);
	printf("Qtd Positivos digitados %.2f\n",pos);
	porpos=(pos/cont)*100;
	printf("Porcentagem positivos %.2f\n",porpos);
	printf("Qtd Negativos digitados %.2f\n",neg);
	porneg=(neg/cont)*100;
	printf("Porcentagem negativos %.2f\n",porneg);	
}
