#include <stdio.h>

int main() { 
    float boy, kilo, vki;

    printf("Boyunuzu giriniz: ");
    scanf("%f", &boy);

    printf("Kilonuzu giriniz: ");
    scanf("%f", &kilo);

    vki = kilo / (boy * boy);
    printf("Vki sonucunuz: %.2f\n", vki);

    return 0;
}