#include <stdio.h>

int main() {  
    int taban, us;
    int sonuc = 1;

    printf("Taban sayisini giriniz: ");
    scanf("%d", &taban);

    printf("Us sayisini giriniz: ");
    scanf("%d", &us);

    for (int i = 1; i <= us; i++) {  
        sonuc = sonuc * taban;
    }

    printf("%d uzeri %d: %d\n", taban, us, sonuc);

return 0;
}
