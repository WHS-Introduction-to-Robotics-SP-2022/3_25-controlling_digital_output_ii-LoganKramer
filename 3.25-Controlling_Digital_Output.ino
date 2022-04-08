void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(10, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);
  digitalWrite(10, LOW);
  delay(1000);
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(250);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(250);
  digitalWrite(3, LOW);
  delay(1000);
  digitalWrite(3, HIGH);
  delay(250);
   digitalWrite(3, LOW);
   delay(2000);
   
   
   
   
}

// the loop function runs over and over again forever
void loop(){
digitalWrite(10, HIGH);
digitalWrite(3, HIGH);
delay(500);
digitalWrite(3, LOW);
digitalWrite(10,LOW);
delay(200);
}
