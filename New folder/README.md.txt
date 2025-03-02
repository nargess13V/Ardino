const int joystickXPin = A0; // پایه آنالوگ برای محور X جوی استیک
const int ledPin = 9;         // پایه PWM برای LED

void setup() {
  pinMode(ledPin, OUTPUT); // تنظیم پایه LED به عنوان خروجی
  Serial.begin(9600);      // شروع ارتباط سریال برای اشکال‌زدایی
}

void loop() {
  int joystickXValue = analogRead(joystickXPin); // خواندن مقدار جوی استیک
  int ledBrightness = map(joystickXValue, 0, 1023, 0, 255); // تبدیل مقدار به شدت روشنایی

  analogWrite(ledPin, ledBrightness); // تنظیم روشنایی LED
  
  // برای اشکال‌زدایی
  Serial.print("Joystick X: ");
  Serial.print(joystickXValue);
  Serial.print(" | LED Brightness: ");
  Serial.println(ledBrightness);

  delay(100); // تاخیر برای ثبات خواندن
}
![code](./7b657cb5-1f2d-41cd-9a27-1ac72e8aba39.jpg)          