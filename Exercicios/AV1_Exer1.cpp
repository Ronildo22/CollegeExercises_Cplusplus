#include<stdio.h>
#include<stdlib.h>

main(){   

  int  A[10], i ;
   

  for(i=0; i<10; i++){
    printf("Digite a %d Nota:", i+1);
    scanf("%d", &A[i]);      
  }
   

  for(i=0; i<10; i++){
  	 if(A[i]>=6){
  	  printf(" Numeros MAIORES e IGUAIS a 6: %d \n",A[i]);
  }
  }
      
 
 
  
  
  
 
   
  system("pause");
}

