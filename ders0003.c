#include <stdio.h>
int main() { 
    int sayi1, sayi2, toplam;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    toplam = sayi1 + sayi2;
    printf("Girdiginiz sayilarin toplami: %d\n", toplam);

    return 0; 
}
