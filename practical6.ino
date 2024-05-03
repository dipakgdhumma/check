int counter = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(0,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(0,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(counter < 100)
  {
    digitalWrite(0,LOW);
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    Serial.println(counter);
    
    
  }
  else if(counter > 101 && counter < 200)
  {
    digitalWrite(4,LOW);
    Serial.println(counter);
    
  }
  else if (counter > 200 && counter < 300)
  {
    digitalWrite(2,LOW);
    digitalWrite(4,HIGH);
    Serial.println(counter);
    
  }

  if (counter > 300)
  {
    counter = 0;
  }

  counter++;
  delay(50);

}
