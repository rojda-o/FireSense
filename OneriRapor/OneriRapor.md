# Proje Konusu

Bu proje, bir ateş algılama sensörü ile yangın tespiti sağlayarak, alev algılandığında kullanıcıyı hem fiziksel (LED/Alarm) hem de dijital (Telegram bildirimi) uyarılarla bilgilendirir.
## Proje Hedefleri

- Yangın algılama sensörü ile erken uyarı sistemi geliştirmek.
- Telegram botu ile kullanıcıyı dijital ortamda bilgilendirmek.
- Fiziksel LED/Alarm sistemiyle kullanıcıyı hızlı bir şekilde uyarmak.
- Düşük maliyetli ve uygulanabilir bir çözüm oluşturmak.

## Tahmini Zaman Çizelgesi  

| **Tarih Aralığı**       | **Görev**                                                    |
|-------------------------|-------------------------------------------------------------|
| **Mart 2025**           | - Problem seçimi ve araştırma yapılması                      |
|                         | - Kullanılacak yöntemlerin belirlenmesi                     |
|                         | - İlk literatür taraması ve bilgi özetleme                  |
|                         | - **Öneri raporunun hazırlanması ve 11 Mart’a kadar teslim edilmesi** |
| **Nisan 2025**          | - Detaylı teknik analiz ve proje geliştirme sürecinin başlatılması |
|                         | - Donanım ve yazılım bileşenlerinin belirlenmesi            |
|                         | - İlk testlerin gerçekleştirilmesi                          |
|                         | - **Ara raporun hazırlanması ve 29 Nisan’a kadar teslim edilmesi** |
| **Mayıs 2025**          | - Sistemin test edilmesi ve hata ayıklama                    |
|                         | - Algılanan tehditler ve sistem zafiyetlerinin belirlenmesi |
|                         | - Performans değerlendirmesi yapılması                      |
| **Haziran 2025**        | - Projenin son kontrollerinin yapılması                     |
|                         | - Sonuçların raporlanması ve sunum hazırlığı                |
|                         | - **Bitirme raporunun teslim edilmesi ve 17 Haziran’da sunum yapılması** |


## Kaynak Planlaması

Proje Ekibi:
 * Melike Badem
 * Rojda Özevli

 Görev dağılımı:
 * Projenin her adımında birlikte devam edilecektir.
 
 Ekipmanlar:

 * ESP82 Geliştirme Kartı
 * USB Bağlantı Kablosu
 * Bilgisayar (Kod geliştirme ve veri analizi için)
 * LED, Buzzer, Direnç, Kablo
 * IR Sensör
 * Breadboard

 Yazılımlar:

 * Arduino IDE
 * C++

 Proje Maliyeti:
 
 * ESP8266 Kartı: 220₺
 * IR Sensör: 24₺
 * Diğer devre elemanları: 100₺

## Risk Analizi

| Risk                          | Çözüm  |
|----------------------------------|---------|
| ESP8266'nın uyumsuzluk veya bağlantı sorunları yaşaması | Alternatif donanımlar test edilebilir, hata ayıklama yapılabilir. | 
| Kalibrasyon sorunları | Sensörlerin doğruluğu test edilmeli, gerektiğinde kalibrasyon ayarları güncellenmelidir. |
| Versiyon uyumsuzlukları | Kullanılan kütüphanelerin sürümleri kontrol edilmeli, uyumlu versiyonlar tercih edilmelidir. |
| Zaman yönetimi sorunları | Görevler zamanında tamamlanmalı, ekip içi koordinasyon sağlanmalıdır. |
| Donanım arızaları | Yedek bileşenler bulundurulmalı, arıza tespit süreçleri belirlenmelidir. |
| Telegram bildirim gecikmeleri | Sunucu ve internet bağlantısı test edilmeli, alternatif haberleşme yöntemleri planlanmalıdır. |

## Ticari Potansiyel

- Endüstriyel tesislerde yangın güvenliği sağlamak.
- Akıllı binalarda yangın algılama sistemleri olarak kullanılabilir.
- Ormanlık alanlarda erken yangın tespiti yapmak.
