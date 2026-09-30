#include <stdio.h>

int main() {  
    int sayi;
    int sonuc = 0;

    printf("ust sinir degerini giriniz: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; i++) { 
        sonuc = sonuc + i;
    }

    printf("%d ye kadar olan sayilarin toplami: %d\n", sayi, sonuc);

return 0;
}