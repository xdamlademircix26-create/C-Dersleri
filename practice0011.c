#include <stdio.h>
#include <math.h>

int main () { 
     double taban, us, sonuc;

     printf("Taban sayiyisini giriniz: ");
     scanf("%lf", &taban);

     printf("Us sayisini giriniz: ");
     scanf("%lf", &us);

     sonuc = pow(taban, us);
     printf("%lf uzeri %lf: %lf\n", taban, us, sonuc);

     return 0;
}