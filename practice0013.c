#include <stdio.h>
#include <math.h>


int main() {  
    double sonuc = 2 * pow(3,2) + 10;

    printf("Islem sonucu: %lf\n", sonuc);

    if (sonuc > 30) {  
        printf("Sonuc 30 dan BUYUKTUR!\n");
    } else {  
        printf("Sonuc 30 dan KUCUKTUR!\n");
    }

    return 0;
}



