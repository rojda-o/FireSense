# Proje Konusu

Bu proje, bir ateş algılama sensörü ile yangın tespiti sağlayarak, alev algılandığında kullanıcıyı hem fiziksel (LED/Alarm) hem de dijital (Telegram bildirimi) uyarılarla bilgilendirir.
## Proje Hedefleri

- Yangın algılama sensörü ile erken uyarı sistemi geliştirmek.
- Telegram botu ile kullanıcıyı dijital ortamda bilgilendirmek.
- Fiziksel LED/Alarm sistemiyle kullanıcıyı hızlı bir şekilde uyarmak.
- Düşük maliyetli ve uygulanabilir bir çözüm oluşturmak.
## Tahmini Zaman Çizelgesi
### **Tahmini Zaman Çizelgesi (Mart - Haziran 2025)**  

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

- **Görev Alacak Kişiler**: 2 yazılım geliştirici, 1 donanım geliştirici
- **Ekipmanlar**: IR Sensör, ESP8266, LED, Bağlantı kabloları
- **Yazılımlar**: Arduino IDE, Telegram API

## Risk Analizi

- **Wi-Fi Bağlantı Sorunları**: Wi-Fi sinyalinin zayıf olduğu durumlarda sistemin çalışmaması. Çözüm: Wi-Fi sinyali güçlü bir ortamda test edilmesi.
- **Telegram Bot API Hatası**: Botun çalışmaması. Çözüm: API token'ı kontrol edilip, doğru ayarların yapıldığından emin olunması.

## Ticari Potansiyel

- Endüstriyel tesislerde yangın güvenliği sağlamak.
- Akıllı binalarda yangın algılama sistemleri olarak kullanılabilir.
- Ormanlık alanlarda erken yangın tespiti yapmak.
