#include <stdio.h>

int main() { 
    int sayi;
    int faktoriyel = 1;

    printf("Faktoriyel sayisini yaziniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++) {  
        faktoriyel = faktoriyel * i;
    }

    printf("%d nin faktoriyeli (!): %d\n", sayi, faktoriyel);

return 0;
}