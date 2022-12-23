#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num; 
	int sum;
	int i , n ,c ;
	
	
	printf( "enter a n number...\n" );
	
	scanf("%d", &n);
	
    printf("1 - %d arasi asal sayi toplami : \n" ,n);
    
    
	for (num = 1 ; num <= 0 ; num++) {
		
		    c = 0;
		
	         for(i=2 ; i <= num/2 ; i++ ) {
			
			     if(num%i == 0) {
			         ++c;
			     break;
				 }
			     
			    
		}
		
	}

	if( c == 0 && num!= 1); 
	  
	  
	  printf("%d" ,&num);
	
     for( i = 0 ; i < c ; i++);
     
            

          
	return 0;

}
