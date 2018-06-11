#include <Servo.h>

Servo servo2;
Servo servo3;  

const int sound_first = 5;
const int sound_second = 6;

int pos = 0;

//ms convert
int v2 = 200;
int v4 = 400;
int v6 = 600;
int v12 = 1200;

void setup() {
  servo2.attach(2);
  servo3.attach(3);
  
  pinMode(sound_first, OUTPUT);
  pinMode(sound_second, OUTPUT);
}

void loop() {
  servo2.write(0); 
  servo3.write(0); 
  
  delay(300); 

  ////eye start
  for (pos = 0; pos <= 90; pos += 1) {
    servo3.write(pos);
    delay(10);
  }
  
  ////song1 start
  digitalWrite(sound_first, 1);
 
  delay(500); 
  
  ////mouth1 start
  //は
  m_open();
  delay(v4);
  m_close();
  //ぴ
  m_open();
  delay(v2);
  m_close();
  //ば
  m_open();
  delay(v4); 
  m_close();
  //す
  m_open();
  delay(v2); 
  m_close();
  //で
  m_open();
  delay(v6); 
  m_close();
  //とぅ
  m_open();
  delay(v6);
  m_close();
  //ゆ
  m_open();
  delay(v12);
  m_close();

  //は
  m_open();
  delay(v4);
  m_close();
  //ぴ
  m_open();
  delay(v2);
  m_close();
  //ば
  m_open();
  delay(v4); 
  m_close();
  //す
  m_open();
  delay(v2); 
  m_close();
  //で
  m_open();
  delay(v6); 
  m_close();
  //とぅ
  m_open();
  delay(v6);
  m_close();
  //ゆ
  m_open();
  delay(v12);
  m_close();

  digitalWrite(sound_first, LOW);

  ////song2 start
  digitalWrite(sound_second, HIGH);

  ////mouth2 start
  //は
  m_open();
  delay(v4);
  m_close();
  //ぴ
  m_open();
  delay(v2);
  m_close();
  //ば
  m_open();
  delay(v4); 
  m_close();
  //す
  m_open();
  delay(v2); 
  m_close();
  //で
  m_open();
  delay(v6); 
  m_close();
  //でぃ
  m_open();
  delay(v6);
  m_close();
  //あ
  m_open();
  delay(v2);
  m_close();
  //しゃ
  m_open();
  delay(v4);
  m_close();
  //ちょ
  m_open();
  delay(v2);
  m_close();
  //う
  m_open();
  delay(1600);
  m_close();
  
  //は
  m_open();
  delay(v4);
  m_close();
  //ぴ
  m_open();
  delay(v2);
  m_close();
  //ば
  m_open();
  delay(v4); 
  m_close();
  //す
  m_open();
  delay(v2); 
  m_close();
  //で
  m_open();
  delay(v6); 
  m_close();
  //とぅ
  m_open();
  delay(v6);
  m_close();
  //ゆ
  m_open();
  delay(1800);
  m_close();
      
  ////finish eye  
  for (pos = 90; pos >= 0; pos -= 1) {
    servo3.write(pos);
    delay(2);
  }
  for (pos = 0; pos <= 90; pos += 1) {
    servo3.write(pos);
    delay(2);
  }  
  for (pos = 90; pos >= 0; pos -= 1) {
    servo3.write(pos);
    delay(3);
  }
  for (pos = 0; pos <= 90; pos += 1) {
    servo3.write(pos);
    delay(3);
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    servo3.write(pos);
    delay(2);
  }
  delay(100000);
}

void m_open(){
    for (pos = 0; pos <= 45; pos += 1) {
    servo2.write(pos);
    delay(1);
  }
}

void m_close(){
  for (pos = 45; pos >= 0; pos -= 1) {
    servo2.write(pos);
    delay(1);
  }
}

