void setup() {
  #define nred A1
  #define ngreen A2
  #define nyellow 11
  #define sred A3
  #define sgreen 10
  #define syellow 13
  #define ered 6
  #define egreen 0
  #define eyellow 5
  #define wred A0
  #define wgreen 12
  #define wyellow 9
  pinMode(nred, OUTPUT);
  pinMode(nyellow, OUTPUT);
  pinMode(ngreen, OUTPUT);
  pinMode(sred, OUTPUT);
  pinMode(syellow, OUTPUT);
  pinMode(sgreen, OUTPUT);
  pinMode(ered, OUTPUT);
  pinMode(eyellow, OUTPUT);
  pinMode(egreen, OUTPUT);
  pinMode(wred, OUTPUT);
  pinMode(wyellow, OUTPUT);
  pinMode(wgreen, OUTPUT);

}

void loop() {
/*digitalWrite(wgreen,LOW);
digitalWrite(egreen,LOW);
digitalWrite(nred,LOW);
digitalWrite(sred,LOW);*/
digitalWrite(wred,HIGH);
digitalWrite(ered,HIGH);
digitalWrite(sred,HIGH);
digitalWrite(ngreen,HIGH);
delay(5000);

digitalWrite(nyellow,HIGH);
digitalWrite(eyellow,HIGH);
digitalWrite(wyellow,HIGH);
digitalWrite(syellow,HIGH);
delay(1000);

digitalWrite(wred,LOW);
digitalWrite(ered,LOW);
digitalWrite(sred,LOW);
digitalWrite(ngreen,LOW);

digitalWrite(nyellow,LOW);
digitalWrite(eyellow,LOW);
digitalWrite(wyellow,LOW);
digitalWrite(syellow,LOW);

digitalWrite(wred,HIGH);
digitalWrite(nred,HIGH);
digitalWrite(sred,HIGH);
digitalWrite(egreen,HIGH);
delay(5000);
digitalWrite(nyellow,HIGH);
digitalWrite(eyellow,HIGH);
digitalWrite(wyellow,HIGH);
digitalWrite(syellow,HIGH);
delay(1000);
digitalWrite(wred,LOW);
digitalWrite(nred,LOW);
digitalWrite(sred,LOW);
digitalWrite(egreen,LOW);

digitalWrite(nyellow,LOW);
digitalWrite(eyellow,LOW);
digitalWrite(wyellow,LOW);
digitalWrite(syellow,LOW);
digitalWrite(wred,HIGH);
digitalWrite(nred,HIGH);
digitalWrite(ered,HIGH);
digitalWrite(sgreen,HIGH);
delay(5000);
digitalWrite(nyellow,HIGH);
digitalWrite(eyellow,HIGH);
digitalWrite(wyellow,HIGH);
digitalWrite(syellow,HIGH);
delay(1000);
digitalWrite(nyellow,LOW);
digitalWrite(eyellow,LOW);
digitalWrite(wyellow,LOW);
digitalWrite(syellow,LOW);
digitalWrite(wred,LOW);
digitalWrite(nred,LOW);
digitalWrite(ered,LOW);
digitalWrite(sgreen,LOW);
digitalWrite(sred,HIGH);
digitalWrite(nred,HIGH);
digitalWrite(ered,HIGH);
digitalWrite(wgreen,HIGH);
delay(5000);
digitalWrite(nyellow,HIGH);
digitalWrite(eyellow,HIGH);
digitalWrite(wyellow,HIGH);
digitalWrite(syellow,HIGH);
delay(1000);
digitalWrite(nyellow,LOW);
digitalWrite(eyellow,LOW);
digitalWrite(wyellow,LOW);
digitalWrite(syellow,LOW);
digitalWrite(sred,LOW);
digitalWrite(nred,LOW);
digitalWrite(ered,LOW);
digitalWrite(wgreen,LOW);



}