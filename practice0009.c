#include <stdio.h>

int main() { 
    float en, boy, derinlik, hacim;
    float debi, saat;

    printf("Havuzun enini giriniz(m): ");
    scanf("%f", &en);

    printf("Havuzun boyunu giriniz(m) ");
    scanf("%f", &boy);

    printf("Havuzun derinligini giriniz(m): ");
    scanf("%f", &derinlik);

    hacim = en * boy * derinlik;
    printf("Hacim degeri(m³): %f\n", hacim);

    printf("Musluk debisini giriniz(m³/saat): ");
    scanf("%f", &debi);

    saat = hacim / debi;
    printf("Gecen sure(saat): %f\n", saat);

    return 0;
}

