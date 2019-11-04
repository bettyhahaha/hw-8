int led = 13;
int led2 = 9;
int led3 = 4;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2,LOW);
  delay(1200);
  digitalWrite(led3,HIGH);
  delay(1500);
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(led2, HIGH);
  delay(5500);
  digitalWrite(led3, LOW);
  delay (2000);
}
