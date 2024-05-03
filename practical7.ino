void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);
  digitalWrite(0,HIGH);
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(4,HIGH);
  Serial.begin(9600);
}

void loop() {
  // read the input on the serial monitor
  if (Serial.available() > 0) {
    // read the incoming byte:
    char input = Serial.read();
    
    // check if input is+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ "green" or "red"
    if (input == 'G') {
      // print value for green
      digitalWrite(0,LOW);
      // digitalWrite(2,HIGH);
      // digitalWrite(4,HIGH);
      delay(1000);
      Serial.println("Value for green");
    } else if (input == 'R') {
      // print value for red
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
      delay(100);
      Serial.println("Value for red");
    } else if (input == 'Y') {
      // print value for red
      digitalWrite(4,LOW);
      digitalWrite(2,HIGH);
      delay(100);
      Serial.println("Value for yellow");
    }
    
  }
  delay(100); // delay to allow time for input
}
