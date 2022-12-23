#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,k;
	int arr [SIZE];
	
	while( i <SIZE ){
		
		i=0;
		printf("%d. index:" ,i);
		scanf("%d" ,&arr[i]);
		
		
		
		if( arr[i] =-1)
			break ;
		
		
		i++;
	}
	
	for(k=0; k<i; k++ ){
		print("%d\n" , arr[k]);
	}
	
	
	
	return 0;
}
