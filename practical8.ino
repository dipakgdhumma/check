void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // read the input on the serial monitor
  while(Serial.available() > 0) {
    // read the incoming byte:
    int input = Serial.parseInt();
    int square = input * input ;
    int cube = input * input * input ;
    Serial.print("Square is : ");
    Serial.println(int(square));
    
    Serial.print("Cube is : ");
    Serial.println(int(cube));
    // check if input is+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ "green" or "red"
    delay(1000);
    Serial.end();
  }
  while(Serial.available()==  0){}
   // delay to allow time for input
}
