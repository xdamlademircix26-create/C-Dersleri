#include <stdio.h>

int main() {  
    float fiyat, indirim, KDV, sonfiyat;

    printf("Etiket fiyatini yaziniz: ");
    scanf("%f", &fiyat);

    printf("Yuzde kac indirim yaziniz: ");
    scanf("%f", &indirim);

    printf("Yuzde kac KDV yaziniz: ");
    scanf("%f", &KDV);

    sonfiyat = (fiyat * (1 - indirim / 100)) * (1 + KDV / 100);
    printf("Satis fiyati: %.2f\n", sonfiyat);

    return 0;
}