 /* 
  *  Lesson1_1
  *  Мигание LED
  * ------------
  *
  * Включает и выключает светодиод (LED) подсоединенный  
  * к выходу 13, с интервалом в 2 секунды
  *
 */
 
int ledPin = 13;                // LED подсоединен к выводу 13
 `
void setup()
{
  pinMode(ledPin, OUTPUT);      // устанавливаем вывод 13 как выход
}
 
void loop()
{
  digitalWrite(ledPin, HIGH);   // включаем LED
  delay(1000);                  // пауза 1 секунда (1000 мс)
  digitalWrite(ledPin, LOW);    // выключаем LED
  delay(1000);                  // пауза 1 секунда (1000 мс)
}

