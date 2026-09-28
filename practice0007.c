#include <stdio.h>

int main() { 
    float fahrenheit, celsius;

    printf("Fahrenheit sayisini giriniz: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    printf("Islemin sonucu: %.2f\n", celsius);

    return 0;
}