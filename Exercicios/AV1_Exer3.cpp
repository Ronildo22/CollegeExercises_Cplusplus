#include<stdio.h>
#include<stdlib.h>

main(){   

  int  A[10], B[10], i, quadrado=0 ;
   

  for(i=0; i<10; i++){
    printf("Digite o %d valor:", i+1);
    scanf("%d", &A[i]);      
  }
   

  for(i=0; i<10; i++){
  	
    quadrado= A[i] * A[i];
    
    B[i]=quadrado;
  }
      
 
  for(i=0; i<10; i++){
    printf("A[%d] =  %d \n", i+1, A[i]);
  }
  
  
  
  for(i=0; i<10; i++){
    printf("Quadrado:\t B[%d] = %d\n", i+1, B[i]);
  }
   
   
   
// printf("\n\quadrado: %d\n\n", quadrado);
   
  system("pause");
}

