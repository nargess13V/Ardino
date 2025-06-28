
int bt=0; // تعریف متغیر برای کلید
int a=8;
int led = 13;

void setup(){
  pinMode( a, INPUT);
  pinMode( led , OUTPUT )
}

void loop(){
  
  int b=digitalRead(a);//خواندن چگونگی a
if (b==HIGHT)//اگر فعال بود لاتپ روشن
{
   digitalWrite(led,HIGHT);
}
else
{
digitaWrite( led , LOW );//لامپ خاموش
}
}