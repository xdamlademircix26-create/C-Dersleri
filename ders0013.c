#include <stdio.h>
#include <math.h>

int main () {  

    double taban = 4.0;
    double us = 5.0;
    double sonuc;

    sonuc = pow(taban, us);
    printf("%lf uzeri %lf: %lf\n", taban, us, sonuc);

    return 0;
}
