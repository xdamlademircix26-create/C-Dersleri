#include <stdio.h>

int main() { 
    float sayi1, sayi2, sayi3, sayi4, sayi5, sonuc;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("Toplanacak diger sayiyi giriniz: ");
    scanf("%f", &sayi2);

    printf("Carpilacak sayiyi giriniz: ");
    scanf("%f", &sayi3);

    printf("Bolunecek sayiyi giriniz: ");
    scanf("%f", &sayi4);

    printf("Farkini alacaginiz sayiyi giriniz: ");
    scanf("%f", &sayi5);

    sonuc = ((sayi1 + sayi2) * sayi3 /sayi4) - sayi5;
    printf("Islem sonucu ((%.0f + %.0f) * %.0f / %.0f - %.0f): %.2f\n", sayi1, sayi2, sayi3, sayi4, sayi5, sonuc);

    return 0;
}