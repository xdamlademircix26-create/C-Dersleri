#include <stdio.h>

int main() { 
    float sayi1, sayi2, bolum;

    printf("Bolunecek birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("kaca boleceksiniz(ikinci sayi): ");
    scanf("%f", &sayi2);

    bolum = sayi1 / sayi2;
    printf("Bolum sonucu: %.2f\n", bolum);

    return 0;
}