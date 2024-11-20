#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int num=0, impar;
	while(num<=40){
		if(num%2==0){
		}else{
			if(num%3==0){
				impar+=num;
				printf("%d\n",num);
			}else{
			}
		}
		num++;
	}
		printf("a soma é: %d", impar-1);
	
	
	
}
