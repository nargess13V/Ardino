
    #include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
// پین‌های متصل به LCD
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); 
// ایجاد یک شیء از کلاس LiquidCrystal
byte armsDown[8] = {
// تعریف شکل آدمک
  0b00100,
  0b01010,
  0b00100,
  0b00100,
  0b01110,
  0b10101,
  0b00100,
  0b01010
};

byte armsUp[8] = {
  0b00100,
  0b01010,
  0b00100,
  0b10101,
  0b01110,
  0b00100,
  0b00100,
  0b01010
};

void setup() {
  lcd.begin(16, 2);
  // راه‌اندازی LCD با ابعاد 16x2
  lcd.createChar(3, armsDown);
  // تعریف کاراکترهای سفارشی
  lcd.createChar(4, armsUp);
}

void loop() {
  // چاپ آدمک در ستون‌های زوج و فرد
  for (int i = 0; i < 16; i++) {
// ستونی که می‌خواهیم آدمک را چاپ کنیم
    lcd.setCursor(i, 0);
    if (i % 2 == 0) {
      lcd.write(3); // آدمک دست پایین
      delay(500);
      lcd.clear();
    } else {
      lcd.write(4);// آدمک دست بالا
      delay(500);
      lcd.clear();
    }
  }
//برای حرکت ادمک از ستون 16 به ستون 0
  for (int i = 15; i > -1; i--) {
    lcd.setCursor(i, 1);
    if (i % 2 == 0) {
      lcd.write(4);
      delay(500);
      lcd.clear();
    } else {
      lcd.write(3);
      delay(500);
      lcd.clear();
    }
  }
}