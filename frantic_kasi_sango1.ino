void setup()
{
 pinMode(10, OUTPUT);
}
void loop()
{
 digitalWrite(10, HIGH); //LED yandı.
 delay(1000); //1 saniye açık kalsın.
 digitalWrite(10, LOW); //LED söndü.
 delay(1000); //1 saniye kapalı kalsın
}