#include <stdio.h>
#include <math.h>

int main() {  
    int sayi1, sayi2, sayi3, sayi4, sonuc2;
    double taban, us, sonuc1;

    printf("Taban sayisini giriniz: ");
    scanf("%lf", &taban);

    printf("Us sayisini giriniz: ");
    scanf("%lf", &us);

    sonuc1 = pow(taban, us);
    printf("%lf uzeri %lf: %lf\n", taban, us, sonuc1);

    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("Ucuncu sayiyi giriniz: ");
    scanf("%d", &sayi3);

    printf("Dorduncu sayiyi giriniz: ");
    scanf("%d", &sayi4);

    sonuc2 = sayi1 + (sayi2 * sonuc1) - (sayi3 / sayi4);
    printf("%d + (%d * %.0lf) - (%d / %d): %d\n", sayi1, sayi2, sonuc1, sayi3, sayi4, sonuc2 );

    return 0;
}
