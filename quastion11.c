#include <stdio.h>
#include <stdlib.h>

 
 int main ( ) {
 	
 	
 	
 	     //4 adet int de�erinde de�i�ken tan�ml�yoruz
      int sayi, toplam, i,j;

      //Hangi aral�kta arayaca��m�z say�lar� for d�ng�s� ile s�rayla getiriyoruz
      for(i = 1; i<10000;i++){
            toplam = 0;

 //for d�ng�s�nde i say�s�na kadar olan say�lar�n tam b�l�n�p b�l�nmedi�ine bak�yoruz
            for(j = 1;j<i;j++){
                  if(i % j == 0) toplam += j;
            }

         //E�er toplam de�i�keni, i deki say�yla ayn� olursa bu m�kemmel say� oluyor.
            if(toplam == i) printf("%d\n",i);
      }
 	
 	

 	
 	return 0;
 }
