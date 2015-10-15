/*
*******************************************************************************************
**                                                                                       **
**                                 Arduino 4. Proje                                      **
**                            Ekrana LED'e göre Çıktı Verme                              **
**                                                                                       **
**                                                                                       **
**                                       Cihat                                           **
**                                                                                       **
*******************************************************************************************
*/
#include <LiquidCrystal.h> //Ekranın class'ını tanıtıyoruz.
LiquidCrystal lcd(12,11, 5, 4, 3, 2); // Ekranın pinleri sırasıyla Arduino üzerindeki 12,11,5,4,3,2 numaralı pinlere takılı.
const int LED=9; // Led'in takılı olduğu Pin.

void setup() {
  pinMode(LED, OUTPUT); //LED'i çıkış olarak tanımladık.
  digitalWrite(9, HIGH); //LED'i yaktık.
}
void loop() {
  if(digitalRead(LED) == HIGH) // Burada şunu belirttik "Eğer Led yanıyor ise"
  {
      lcd.begin(16, 2); //Ekranın kullanılacak alanı ve harf sayısı 16 harf(1 satır için) - 2 satır
      lcd.print("Acik"); //Ekrana "Acik" yaz.
      delay(3000); // 3 saniye bekle.
      digitalWrite(9, LOW);   //Led'i kapat.
  }
  else // Değilse
  {
     lcd.begin(16, 2);
     lcd.print("Kapali"); //Ekrana "Kapali" yaz. 
     delay(3000); //3 saniye bekle.
     digitalWrite(9, HIGH);  //Led'i aç.
  }
  
}
