// 13. Piezo
const int buzzer = A1;

const int knockSensor = A1;

const int threshold = 400;

int sensorReading = 0;

void setup()

{ pinMode(buzzer, INPUT);
}
void loop()

{

pinMode(buzzer, INPUT);

sensorReading = analogRead(knockSensor);
Serial.println(sensorReading);

if (sensorReading >= threshold)

{

pinMode(buzzer, OUTPUT);

tone(buzzer,264); delay(200); noTone(buzzer); //C

tone(buzzer,293); delay(200); noTone(buzzer); //D

tone(buzzer,329); delay(200); noTone(buzzer); //E

tone(buzzer,349); delay(200); noTone(buzzer); //F

tone(buzzer,392); delay(200); noTone(buzzer); //G

tone(buzzer,440);

delay(200);

noTone(buzzer);

tone(buzzer,494);

delay(200);

//A

//B

noTone(buzzer);

tone(buzzer, 524);

delay(200);

noTone(buzzer);

//C

}

delay(100);

}

