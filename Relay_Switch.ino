int sensorPin = A0;
int relayPin = 8;
int dt=50;
int sensorValue;
void setup() 
{
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
  pinMode(relayPin, OUTPUT);
}
void loop() 
{
  sensorValue = analogRead(sensorPin);
  if( sensorValue <= 150 )  // Change the value as per your requirement
  {
    digitalWrite(relayPin, HIGH);
    Serial.println(sensorValue);
    delay(dt);
  }
  else
  {
    digitalWrite(relayPin, LOW);
    Serial.println(sensorValue);
  }
}

