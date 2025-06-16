# Final Rapor

## 1. Proje Konusu

Bu proje, IR (Kızılötesi) sensör kullanılarak alev algılamayı amaçlayan bir erken uyarı sistemidir. Sistemde, alev algılandığında LED ve buzzer ile fiziksel uyarı verilmekte; ayrıca Wi-Fi bağlantısı üzerinden Telegram bot aracılığıyla dijital bildirim gönderilmektedir. Böylece hem yerel hem de uzaktan izlenebilir bir güvenlik sistemi geliştirilmiştir.

## 2. Özet

Proje iki temel bileşen üzerine kuruludur: fiziksel uyarı sistemi ve dijital bildirim sistemi. IR sensörü ortamda alev algıladığında LED yanar ve buzzer ötme sesi çıkarır. Aynı zamanda ESP8266 Wi-Fi modülü internete bağlanarak Telegram bot aracılığıyla kullanıcıya anlık mesaj gönderir. Bu sayede hem lokal hem uzaktan müdahale imkânı sunulmaktadır. Projenin geliştirme süreci modüler ve test odaklı şekilde ilerlemiştir.

## 3. Kullanılan Yöntemler

### Donanımsal Yöntemler
- **IR Alev Algılama Sensörü (KY-026):** Alevin yaydığı kızılötesi ışınları algılar ve dijital sinyal üretir.
- **LED (D0):** Alev algılandığında yanarak kullanıcıya görsel uyarı verir.
- **Buzzer (D1):** Sesli uyarı sağlayarak dikkat çeker.
- **ESP8266 Wi-Fi Modülü:** Sistemi internete bağlayarak Telegram üzerinden mesaj gönderilmesini sağlar.
- **Breadboard ve Kablolar:** Devreyi test amaçlı kurmak ve kolay değişiklik yapmak için kullanılmıştır.

### Yazılımsal Yöntemler
- **Arduino IDE:** Kod geliştirme ve ESP8266 yüklemeleri için kullanılmıştır.
- **Telegram Bot API:** Kullanıcıya dijital mesaj göndermek için ESP8266 üzerinden Telegram botu oluşturulmuştur.
- **C++:** Arduino ortamında kodlama için kullanılan programlama dilidir.
- **UniversalTelegramBot Kütüphanesi:** Telegram botuna mesaj göndermeyi kolaylaştıran kütüphane.

## 4. Yapılan Çalışmalar ve Görselleri

- IR sensör, LED ve buzzer bileşenleri breadboard üzerinde test edildi.
- ESP8266 Wi-Fi bağlantısı başarıyla sağlandı.
- Telegram bot oluşturularak sistemle entegre edildi.
- Alev algılandığında sistemin hem fiziksel hem de dijital olarak uyarı vermesi sağlandı.
- Alevin süresine göre mesaj gönderme mantığı yazılımla geliştirildi.

<img src="Figures/devre.jpg" width="500" height="400">
> Şekil 1: IR sensörlü erken uyarı sisteminin breadboard üzerinde kurulmuş hali ve telegram bildirimi.

## 5. Elde Edilen Sonuçlar

- Alev algılandığında LED ve buzzer aktif hale gelmiştir.
- Telegram botu üzerinden başarılı şekilde mesaj gönderilmiştir.
- Sistem, kısa süreli ve uzun süreli alev durumlarını ayırt edebilmekte, mesaj tekrarını gereksiz yere yapmamaktadır.
- Wi-Fi bağlantısı istikrarlı çalışmış, bağlantı kopmalarına karşı dayanıklıdır.
- Fiziksel ve dijital uyarı mekanizmaları entegre biçimde sorunsuz şekilde çalışmaktadır.

## 6. Karşılaşılan Sorunlar ve Çözümler

| Sorun                                      | Çözüm                                                                 |
|-------------------------------------------|-----------------------------------------------------------------------|
| ESP8266 bağlantı hataları                 | Kütüphaneler güncellendi ve doğru port ile bağlantı sağlandı.        |
| Telegram mesajlarının fazlalığı           | Alev algılandığında tekrar tekrar mesaj gönderilmesi engellendi
| Telegram bot entegrasyon hataları         | Gerekli kütüphaneler yüklendi, token/chat ID bilgileri kontrol edildi. |



## 7. Projenin Devamında Yapılacaklar

- Sistem harici bir batarya ile test edilerek taşınabilir hale getirilecek.
- Sisteme sıcaklık sensörü entegre edilerek çoklu sensörlü yangın uyarı sistemi geliştirilebilir.
- Telegram üzerinden alarm kapatma, mesaj geçmişi görüntüleme gibi özellikler eklenerek proje ileri düzeye taşınabilir.

**Güç Bağımsızlığı Testi (Planlanan)**
Projenin taşınabilirliği için harici batarya ile uzun süreli çalışma testi yapılacaktır. Bu test ile sistemin kesintisiz şekilde dış ortamlarda da çalışıp çalışmadığı gözlemlenecek ve enerji tüketim verimliliği analiz edilecektir.

