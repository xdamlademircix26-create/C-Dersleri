#include <stdio.h>

int main() { 
    float sayi1, sayi2, toplam;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    toplam = sayi1 + sayi2;
    printf("Girdiginiz sayilarin toplami: %d\n", toplam);

    return 0;
}
 