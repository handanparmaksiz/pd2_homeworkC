#include <stdio.h>

// verielen bir sayının verieln kuvvetini bulan rekürsif fonk.
int power(int tabans, int us)
{
    if (us == 0) {   
        return 1;
    }
    else {    
        return tabans* power(tabans, us - 1);
    }
}

// main function
int main()
{
    int tabans, us;
    printf("Enter tabans: ");
    scanf("%d", &tabans);
    printf("Enter us: ");
    scanf("%d", &us);
    int sonuc = power(tabans, us);
    printf("verilen sayinin ustu %d", sonuc);
    return 0;
}
