#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
  int a , b;
  int min;

  printf(" enter a first value : \n");
  scanf ("%d" ,&a);
	
  printf(" enter a second value : \n");
  scanf("%d" ,&b);
  
  if( a < b ) {
  	
   min = a;
  }
  
  else  {
  
  min = b;
  }
	
  while(1) {
  	
  	if (min % a == 0 && min % b == 0);
  	
  	printf("%d ve %d un EKOK'u %d.", a, b, min);
  	    break ;
    }
    
	  
	    ++min;
	

	return 0;
}
