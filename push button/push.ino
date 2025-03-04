Int ledpin=13;
Int inpin=7;
Int val=0;
void setup() {
pinMode(LED_BUILTIN,OUTPUT);
pinMode(inpin,INPUT);
}
void loop()
{
val=digitalRead(inpin);
digitalWrite(LED_BUILTIN);
}