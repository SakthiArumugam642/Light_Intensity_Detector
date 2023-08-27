Int sensorValue = 0;
Void setup()
{
pinMode(A0, INPUT);
Serial.begin(9600);
pinMode(9, OUTPUT);
}
Void loop()
{
sensorValue = analogRead(A0);
Serial.println(sensorValue);
analogWrite(9, map(sensorValue,0,1023,0,255));
delay(100);
}