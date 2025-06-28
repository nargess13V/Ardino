#define T_C 262
#define  T_D 294
#define  T_E 330
#define  T_F 349
//#define  T_g 392
//#define  T_A 440
//#define  T_B 493
const int C = 10;
const int D = 9;
const int E = 8;
const int F = 7;
const int buzz = 12;
void setup() {

  pinMode (C, INPUT);
  digitalWrite (C, HIGH);
  pinMode (D, INPUT);
  digitalWrite (D, HIGH);
  pinMode (E, INPUT);
  digitalWrite (E, HIGH);
  pinMode (F, INPUT);
  digitalWrite (F, HIGH);
}

void loop() {
  while (digitalRead(C) == LOW) {
    tone ( buzz, T_C);
  }
  while (digitalRead(D) == LOW) {
    tone ( buzz, T_D);
  }
  while (digitalRead(E) == LOW) {
    tone ( buzz, T_E);
  }
  while (digitalRead(F) == LOW) {
    tone ( buzz, T_F);
  }
  noTone ( buzz);
}