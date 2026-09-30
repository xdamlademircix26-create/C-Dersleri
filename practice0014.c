#include <stdio.h>
#include <math.h>

int main() {  
    double taban, us, sonuc;

    printf("Taban sayisini giriniz: ");
    scanf("%lf", &taban);

    printf("Us sayisini giriniz: ");
    scanf("%lf", &us);

    sonuc = (81 / pow(taban, us) - 4) * 5;
    printf("islem sonucu: %.2lf\n", sonuc);

    if(0 <= sonuc) {  
        printf("Islem sonucu POZITIF!\n");
    } else { 
        printf("Islem sonucu NEGATIF!\n");
    }

    return 0;
}
