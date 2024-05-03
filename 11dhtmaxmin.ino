
int maxTemp = 100;
int minTemp = 95;
// Include the DHT11 library for interfacing with the sensor.
#include <DHT11.h>

// Create an instance of the DHT11 class.
// - For Arduino: Connect the sensor to Digital I/O Pin 2.
DHT11 dht11(A1);

void setup() {
    pinMode(2,OUTPUT);
    pinMode(4,OUTPUT);
    digitalWrite(2,HIGH);
    digitalWrite(4,HIGH);
    Serial.begin(9600);

}

void loop() {
    int temperature = 0;
    int humidity = 0;

    // Attempt to read the temperature and humidity values from the DHT11 sensor.
    // int result = dht11.readTemperatureHumidity(temperature, humidity);

    int temp1 = dht11.readTemperature();

    int tempInFar = (temp1*1.8) + 32 ;

    if(tempInFar <= 96)
    {
      Serial.print("LOW");
      digitalWrite(4,LOW);
      digitalWrite(2,HIGH);
    }
    else if(tempInFar >= 100)
    {
      Serial.print("HIGH");
      digitalWrite(2,LOW);
      digitalWrite(4,HIGH);
    }
    else
    {
      digitalWrite(2,HIGH);
      digitalWrite(4,HIGH);
    }

    Serial.print(temp1);
    Serial.print("\t");
    Serial.println(tempInFar);
    
    
}
