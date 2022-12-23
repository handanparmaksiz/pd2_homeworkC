#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
main (){
	double a ,b ,c;;
	double delta;
	double x1, x2;
	double realkok ,imagkok;
	
	printf("a : ");
	scanf("%lf ",&a);
	
	printf("b : ");
	scanf("%lf" ,&b);
	
	printf("c : ");
	scanf("%lf" ,&c);
	
	delta = (b * b ) -4 * (a*c);
	
	if ( delta > 0 ) {
		
		printf(" reel kok vardir \n"); 
		x1 = (- b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) /( 2 * a);
	    printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
		
	}
	else if ( delta == 0) { 
	
	    printf("cakisik kok vardýr \n");
	    x1 = x2 = -b / ( 2*a);
	    
	    
	}
	
	if ( delta < 0){
		
		printf("reel kok yoktur \n");
		imagkok = - sqrt(delta) / (2 * a);
		printf("x1 = %.2lf+%.2lfi ve x2 = %.2f-%.2fi" , realkok , imagkok , realkok , imagkok );
		
	
	}
	

	return 0;
}
