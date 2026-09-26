#include <stdio.h>

int main() { 
    int sayi1, sayi2, carpim;

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    carpim = sayi1 * sayi2;
    printf("Carpim sonucu: %d\n",carpim);

    return 0;
}
 