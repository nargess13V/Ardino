پین کنترل جهت موتور (مثلا چرخش به جلو) // ;const int in1 = 9
پین کنترل جهت موتور (مثلا چرخش به عقب) // ;const int in2 = 8
پین کنترل سرعت موتور // ;const int enable = 10
void setup() {
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(enable, OUTPUT);
}
void loop() {
چرخش به جلو //
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
analogWrite(enable, 255); // تنظیم سرعت موتور
مکث به مدت  2ثانیه // );delay(2000
چرخش به عقب //
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
analogWrite(enable, 255); // تنظیم سرعت موتور
مکث به مدت  2ثانیه // );delay(2000
}
