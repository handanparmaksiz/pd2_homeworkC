#include <stdio.h>
#include <stdlib.h>

 
 int main ( ) {
 	
 	
 	
 	     //4 adet int deðerinde deðiþken tanýmlýyoruz
      int sayi, toplam, i,j;

      //Hangi aralýkta arayacaðýmýz sayýlarý for döngüsü ile sýrayla getiriyoruz
      for(i = 1; i<10000;i++){
            toplam = 0;

 //for döngüsünde i sayýsýna kadar olan sayýlarýn tam bölünüp bölünmediðine bakýyoruz
            for(j = 1;j<i;j++){
                  if(i % j == 0) toplam += j;
            }

         //Eðer toplam deðiþkeni, i deki sayýyla ayný olursa bu mükemmel sayý oluyor.
            if(toplam == i) printf("%d\n",i);
      }
 	
 	

 	
 	return 0;
 }
