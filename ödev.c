#include <stdio.h>
#include <time.h>

struct TarihSaat {
    int yil, ay, gun, saat, dakika, saniye;
};

union ZamanFarki {
    long fark_saniye;
    double fark_dakika;
};

time_t tarih_to_epoch(struct TarihSaat t) {
    struct tm zaman = {0};
    zaman.tm_year = t.yil - 1900;
    zaman.tm_mon = t.ay - 1;
    zaman.tm_mday = t.gun;
    zaman.tm_hour = t.saat;
    zaman.tm_min = t.dakika;
    zaman.tm_sec = t.saniye;

    return mktime(&zaman);
}

int main() {
    struct TarihSaat t1, t2;
    union ZamanFarki fark;

    printf("Ýlk tarihi girin (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &t1.yil, &t1.ay, &t1.gun, &t1.saat, &t1.dakika, &t1.saniye);

    printf("Ýkinci tarihi girin (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &t2.yil, &t2.ay, &t2.gun, &t2.saat, &t2.dakika, &t2.saniye);

    time_t epoch1 = tarih_to_epoch(t1);
    time_t epoch2 = tarih_to_epoch(t2);

    fark.fark_saniye = difftime(epoch2, epoch1);
    fark.fark_dakika = fark.fark_saniye / 60.0;

    printf("\nÝlk Tarih Epoch Zamaný: %ld\n", epoch1);
    printf("Ýkinci Tarih Epoch Zamaný: %ld\n", epoch2);
    printf("Ýki tarih arasýndaki fark: %ld saniye (%.2f dakika)\n", fark.fark_saniye, fark.fark_dakika);

    return 0;
}
