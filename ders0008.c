#include <stdio.h>

int main() { 
    float sayi1, sayi2, sayi3, sonuc;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%f", &sayi2);

    printf("Cikarilacak ucuncu sayiyi giriniz: ");
    scanf("%f", &sayi3);

    sonuc = (sayi1 + sayi2) - sayi3;
    printf("Islem sonucu: %.2f\n", sonuc);

    return 0;
}
  