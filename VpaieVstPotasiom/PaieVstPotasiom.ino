const int p = A0; // پایه آنالوگ برای پتاسیم‌متر

void setup() {
  Serial.begin(9600); // راه‌اندازی ارتباط سریال
}

void loop() {
  int s = analogRead(p); // خواندن مقدار آنالوگ
  float v = s * (5.0 / 1023.0); // تبدیل به ولتاژ (0-5V)
  Serial.println(v);
   // نمایش ولتاژ در سریال مانیتور
  
  delay(100); // تاخیر برای خواندن مجدد
}