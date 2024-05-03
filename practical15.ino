#define IRSensor A1
#define PinLed 4
// #define buz A1
// int val=0;
// Define the pin where the LED is connected
#define LED 0
void setup() {
  // Set the IRSensor pin as input
  pinMode(IRSensor, INPUT);
  // Set the LED pin as output
  // pinMode(buz, OUTPUT);
    pinMode(PinLed,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // Read the value from the IR sensor
  Serial.available();
 int value ;
 value = digitalRead(IRSensor);
  // If the value is LOW, it means an object is detected
  Serial.println(value);
  if(value == LOW) {
  //  value = digitalRead(IRSensor);
    // Serial.println("detected");
    // Serial.print(1);
    // Turn on the LED
    // tone(buz,1000,500);
    digitalWrite(PinLed, LOW);
    // digitalWrite(buz, HIGH);  // turn the LED on (HIGH is the voltage level)
  }
  // Otherwise, no object is detected
  if(value == HIGH)
    {
    // Turn off the LED
    // Serial.println("not detected");
    // Serial.println(0);
    digitalWrite(PinLed,HIGH);
    // digitalWrite(buz, LOW);
    // notone(buz,1000,500);
    }

    delay(200);
   
  
}// turn  on led and buzzer with IR