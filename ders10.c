#include <stdio.h>

int main() { 
    int sayi1, sayi2, sayi3, islem;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Carpilacak ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    islem = (sayi1 + sayi2) * sayi3;
    printf("Islem sonucu ((%d + %d) * %d): %d\n", sayi1, sayi2, sayi3, islem);

    return 0;
}