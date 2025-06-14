// پین آنالوگ برای محور X جوی استیک
const int joystickPin = A0; // پین آنالوگ جوی استیک
// پین دیجیتال برای LED
const int ledPin = 9; // تنظیم پین LED به عنوان خروجی

// شروع ارتباط سریال برای دیباگ
void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // خواندن مقدار جوی استیک
    int joystickValue = analogRead(joystickPin);

    // ترمال کردن مقدار خوانده شده به بازه ۵ تا ۲۵۵ برای PWM
    int ledBrightness = map(joystickValue, 0, 1023, 0, 255);
    analogWrite(ledPin, ledBrightness); // تنظیم شدت روشنایی LED

    // چاپ مقدار برای دیباگ (اختیاری)
    Serial.print("Joystick X: ");
    Serial.print(joystickValue);
    Serial.print(" | LED Brightness: ");
    Serial.println(ledBrightness);

    // تاخیر برای جلوگیری از خواندن مکرر بیش از حد
    delay(100);
}