int PressurePin = A0;
int force;
int LEDpin = 12;

void setup() {
  Serial.begin(9600);
  pinMode(LEDpin,OUTPUT);
}

void loop() {
  force = analogRead(PressurePin);
  Serial.println(force);
  if(force > 175){
    if(digitalRead(force) == HIGH)
    {
      digitalWrite(LEDpin, HIGH); 
    }
    else
    {
      digitalWrite(LEDpin, LOW);  
    }  
  }
  delay(100);
}
