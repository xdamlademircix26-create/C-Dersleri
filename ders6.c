#include <stdio.h>

int main() { 
    float sayi1, sayi2, sayi3, fark;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%f", &sayi3);

    fark = sayi1 - sayi2 - sayi3;
    printf("Girdiginiz sayilarin farki: %f\n", fark);

    return 0; 
}