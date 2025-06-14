 // چهار ردیف
const byte COLS = 4; // چهار ستون

char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; // پایه‌های ردیف‌ها
byte colPins[COLS] = {5, 4, 3, 2}; // پایه‌های ستون‌ها

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

String inputCode;
const String correctCode = "1234"; // کد صحیح

void setup() {
  pinMode(9, OUTPUT); // تنظیم پایه 9 به عنوان خروجی
  digitalWrite(9, LOW); // ال‌ای‌دی را خاموش می‌کنیم
}

void loop() {
  char key = keypad.getKey(); // دریافت کلید فشرده شده

  if (key) { // اگر کلیدی فشرده شده باشد
    inputCode += key; // کلید فشرده شده را به ورودی اضافه می‌کنیم

    if (inputCode.length() == correctCode.length()) { // اگر طول ورودی برابر با طول کد صحیح باشد
      if (inputCode == correctCode) { // اگر ورودی صحیح باشد
        digitalWrite(9, HIGH); // ال‌ای‌دی را روشن می‌کنیم
      } else {
        digitalWrite(9, LOW); // در غیر این صورت ال‌ای‌دی را خاموش می‌کنیم
      }
      inputCode = ""; // ورودی را پاک می‌کنیم
    }
  }
}