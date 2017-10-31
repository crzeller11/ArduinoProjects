// initializations
int my_LED = 3;
int DELAY = 1000; // this delay is in milliseconds

void setup() {
  // we specify that we want to send information to the LED
  pinMode(my_LED, OUTPUT);

}

// loops are commands that you tell your arduino to do over and over
// forever. This loop tells the LED to blink. 
void loop() {
  digitalWrite(my_LED, HIGH);  // turn the LED on
  delay(DELAY); // keep the LED on for however many milliseconds 
  digitalWrite(my_LED, LOW); // turn the LED off
}
