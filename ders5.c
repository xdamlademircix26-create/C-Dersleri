#include <stdio.h>

int main() { 
    int sayi1, sayi2, sayi3, fark;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    fark = sayi1 - sayi2- sayi3;
    printf("Girdiginiz sayilarin farki: %d\n", fark);

    return 0;
}