# Epoch Zaman Hesaplama Programı

Bu proje, kullanıcının girdigi iki tarih ve saat arasındaki zaman farkını **epoch** zaman üzerinden hesaplayan bir C programıdır. Program, **struct** ve **union** kullanarak tarih ve zaman verilerini saklar ve hesaplamaları gerçekleştirir.

## İçindekiler
- [Epoch Zamanı Nedir?](#epoch-zamanı-nedir)
- [Nasıl Çalışır?](#nasıl-çalışır)
- [Kurulum](#kurulum)
- [Kullanım](#kullanım)
- [Örnek Çıktı](#ornek-çıktı)
- [Gündelik Hayatta Kullanım Örneği](#gündelik-hayatta-kullanım-orneği)
- [Lisans](#lisans)

## Epoch Zamanı Nedir?
Epoch zamanı, **1 Ocak 1970 00:00:00 UTC**'den itibaren geçen saniye sayısını ifade eder. Bu program, kullanıcının girdigi tarih ve saat bilgisini epoch zamanına çevirerek iki tarih arasındaki farkı hesaplar.

## Nasıl Çalışır?
1. Kullanıcıdan iki farklı tarih ve saat bilgisi alınır.
2. **`struct`** kullanılarak tarih ve saat bilgileri saklanır.
3. **`tarih_to_epoch`** fonksiyonu ile bu bilgiler **epoch zamanına** çevrilir.
4. **`difftime`** fonksiyonu kullanılarak iki epoch arasındaki fark hesaplanır.
5. Sonuç, **saniye ve dakika cinsinden** ekrana yazdırılır.

## Kurulum
Bu projeyi kullanmak için aşağıdaki adımları takip edin:

1. **Github reposunu klonlayın:**
   ```bash
   git clone https://github.com/kullaniciadi/epoch-zaman-hesaplama.git
   ```

2. **C derleyicinizin kurulu olduğundan emin olun.** (GCC kullanılabilir.)
   ```bash
   gcc epoch_hesaplama.c -o epoch_hesaplama
   ```

3. **Programı çalıştırın:**
   ```bash
   ./epoch_hesaplama
   ```

## Kullanım
Program, kullanıcıdan iki tarih girilmesini ister ve bu tarihleri epoch zamanına çevirerek farkı hesaplar.

## Örnek Çıktı
```
İlk tarihi girin (YYYY MM DD HH MM SS): 2024 02 01 12 00 00
İkinci tarihi girin (YYYY MM DD HH MM SS): 2024 02 02 12 00 00

İlk Tarih Epoch Zamanı: 1706788800
İkinci Tarih Epoch Zamanı: 1706875200
İki tarih arasındaki fark: 86400 saniye (1440.00 dakika)
```

## Gündelik Hayatta Kullanım Örneği
Epoch zaman hesaplama, günlük hayatta birçok farklı alanda kullanılabilir. Örneğin:
- **Uygulama Geliştirme:** Bir yazılımda kullanıcı giriş ve çıkış zamanlarını kayıt altına almak için epoch zaman formatı kullanılabilir.
- **Banka İşlemleri:** Bankalar, transfer işlemlerinde zaman damgası olarak epoch zamanını kullanarak işlemlerin sırasını belirleyebilir.
- **Hava Durumu Uygulamaları:** Meteoroloji istasyonları, ölçülen verileri belirli zaman aralıklarıyla kaydederek analiz eder.
- **E-ticaret Siteleri:** Siparişin ne zaman oluşturulduğunu ve ne zaman teslim edildiğini takip etmek için kullanılabilir.



