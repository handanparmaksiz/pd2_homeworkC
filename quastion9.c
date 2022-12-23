#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) { 

 int num, origNumber, kalan ;
 int  sonuc = 0, n = 0 ;

    printf("enter a value:  \n");
    scanf("%d", &num);

     origNumber = num;
    
         while (origNumber != 0) {
        origNumber /= 10;
        
        ++n;
    }

     origNumber == num;

        while (origNumber != 0) {
        	
        kalan = origNumber % 10;
        
        sonuc += pow(kalan, n);
        
        origNumber /= 10;
    }

    if(sonuc == num)
    
        printf("%d Armstrong sayisi.", num);
        
    else
    
        printf("%d Armstrong Sayisi degil.", num);



	return 0;
}
