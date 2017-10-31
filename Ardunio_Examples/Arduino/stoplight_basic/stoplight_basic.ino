// initializing variables for the stoplight; these correspond to 
// which arduino pins each LED is plugged into
int GREEN = 3;
int YELLOW = 4;
int RED = 5;

// basic functions, here we specify that we're sending information
// to the LED
void setup() {
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);

}

// run the stoplight
void loop() {
  digitalWrite(GREEN, HIGH); // turn on green light
  delay(3000); // keep on for 3 seconds
  digitalWrite(GREEN, LOW); // turn off green light
  digitalWrite(YELLOW, HIGH); // turn on yellow light
  delay(1000); // keep on for 1 second
  digitalWrite(YELLOW, LOW); // turn off yellow light
  digitalWrite(RED, HIGH); // turn on red light
  delay(2000); // keep of for 2 seconds
  digitalWrite(RED, LOW); // turn red light over
  // repeat the loop!
}
