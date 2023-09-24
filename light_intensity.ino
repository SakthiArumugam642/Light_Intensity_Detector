int sensorvalue = A0;

void setup() {

Serial.begin(9600);

pinMode(13, OUTPUT);

pinMode(sensorvalue, INPUT);

}

void loop() {

int ldr = analogRead(sensorvalue);

if (ldr <= 257) { //treshold value i.e 257

digitalWrite(13, HIGH); //sending pulse to turn on/off led

Serial.print("low intensity");

Serial.println(ldr*5/1023); //printing the ldr value in the range of 0-1024

analogWrite(13, map(sensorvalue,0,1023,0,255)); // to adjust the brightness of led. 

}
else {

digitalWrite(13, LOW);

Serial.print("high intensity");

Serial.println(ldr*5/1023);

analogWrite(13, map(sensorvalue,0,1023,0,255));
  


}

}
