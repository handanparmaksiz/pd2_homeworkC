#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


 int main()
 {
   
   int i, c;
   int num, n;
   
   printf("Enter a value: ");
   
   scanf("%d", &n);
   
   printf("1 - %d asal sayilar: \n",n);
   
       for(num = 1 ; num<=n ; num++){
      c = 0;
      
            for(i=2 ; i<=num/2 ; i++){
            	
            	
                if(num%i==0) {
                  c++;  
                break;
      }
   }
   
   if(c==0 && num!= 1){
   	
   	printf("%d ",&num);
      
   }
   }
 
  return 0;
 }	
	
