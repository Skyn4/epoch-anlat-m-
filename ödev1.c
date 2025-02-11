#include <stdio.h>
#include <time.h>

// Sipari� bilgilerini saklayan yap�
struct Siparis {
    int yil, ay, gun, saat, dakika, saniye;
};

// Epoch zaman�na �eviren fonksiyon
time_t tarih_to_epoch(struct Siparis t) {
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
    struct Siparis siparis, teslimat;
    double fark_saat;

    // Kullan�c�dan sipari� zaman�n� al
    printf("Sipari� zaman�n� girin (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &siparis.yil, &siparis.ay, &siparis.gun,
          &siparis.saat, &siparis.dakika, &siparis.saniye);

    // Kullan�c�dan teslimat zaman�n� al
    printf("Teslimat zaman�n� girin (YYYY MM DD HH MM SS): ");
    scanf("%d %d %d %d %d %d", &teslimat.yil, &teslimat.ay, &teslimat.gun,
          &teslimat.saat, &teslimat.dakika, &teslimat.saniye);

    // Epoch zamanlar�n� hesapla
    time_t siparis_epoch = tarih_to_epoch(siparis);
    time_t teslimat_epoch = tarih_to_epoch(teslimat);

    // �ki zaman aras�ndaki fark� saat cinsinden hesapla
    fark_saat = difftime(teslimat_epoch, siparis_epoch) / 3600.0;

    // Sonucu ekrana yazd�r
    printf("\nSipari� Epoch Zaman�: %ld\n", siparis_epoch);
    printf("Teslimat Epoch Zaman�: %ld\n", teslimat_epoch);
    printf("Sipari� teslim s�resi: %.2f saat\n", fark_saat);

    return 0;
}

