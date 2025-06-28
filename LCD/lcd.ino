#include <LiquidCrystal.h>
LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

// ایجاد یک شیء از کلاس LiquidCrystal

void setup() {
  lcd.begin(16, 2);  
// راه‌اندازی ال سی دی  با ابعاد 2×16
  lcd.clear();
//پاک کردن ال سی دی

}

void loop() {
  lcd.print("Hello world");  
// چاپ عبارت "hello world" روی ال سی دی
  lcd.setCursor(0, 1);
// شروع کاراکتر از خونه ردیف صفر و ستون یک
  lcd.print(" Lcd tutorial");
}