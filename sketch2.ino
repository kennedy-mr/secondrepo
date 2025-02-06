// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int knobValue = analogRead(A0);
  if(knobValue > 400)
  {
    analogWrite(LED_BUILTIN, HIGH);
    analogWrite(LED_BUILTIN, LOW);
  }
   // print out the value you read:
  Serial.println(knobValue);

}
