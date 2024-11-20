#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int convertcelsiusfahr(int temp){
	int tempF;
	tempF = (temp * 9/5) + 32;
	
	return tempF;
}

int convertfahrcelsius (int temp){
	return (temp - 32) * 5/9;
}

int main(int argc, char *argv[]) {
	
	int temp, opt;
	char flag;
	do{
		flag = 't'; //true
		printf("Enter the temperature: ");
		scanf("%d",&temp);
	
		printf("\n1 - Celsius to Fahrenheit: ");
		printf("\n2 - Fahrenheit to Celsius:\n");
		scanf("%d",&opt);
	
		if(opt==1){
			printf("The convertion result from Celsius to Fahrnheit is: %d",convertcelsiusfahr(temp));
		}else if(opt==2){
			printf("The convertion result from Fahrnheit to Celcius is: %d",convertfahrcelsius(temp));
		}else{
			flag = 'f'; //false
			printf("\n\nInvalid Option! Enter the option again...");
		}
		
	}while(flag!= 't');
	
return 0;

}
