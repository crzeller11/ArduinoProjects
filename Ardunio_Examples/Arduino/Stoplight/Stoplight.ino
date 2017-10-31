
// MINI README:
// This code is for a three light "stoplight." When implemented, it controls a red, yellow, and green LED, 
// and times them turning off and on as a normal stoplightwould operate.
// This code corresponds to two separate stoplights
// When the code is uploaded to the arduino, it runs on the arduino indefintely. Once it's been uploaded, the
// Arduino will follow the directions in the code as long as it has power. It doesn't need continual connection
// to the code. 
// Chloe Zeller, for Art, Creativity and Cognition, COGS 225
 
// varaibles, first stoplight
// which pins in the UNO each colored light is connected to
int GREEN1 = 3; 
int YELLOW1 = 4;
int RED1 = 5;
// how long each light will be kept on
int DELAY_GREEN1 = 1000;
int DELAY_YELLOW1 = 1000;
int DELAY_RED1 = 1000;

// variables, second stoplight
int GREEN2 = 6;
int YELLOW2 = 7;
int RED2 = 8;
int DELAY_GREEN2 = 1000;
int DELAY_YELLOW2 = 1000;
int DELAY_RED2 = 1000;

// basic functions
void setup() {
  //setup LED modes
  // Output signifies that we're going to send information to this LED, that it will be turning on
  pinMode(GREEN1, OUTPUT);
  pinMode(YELLOW1, OUTPUT);
  pinMode(RED1, OUTPUT);
  pinMode(GREEN2, OUTPUT);
  pinMode(YELLOW2,OUTPUT);
  pinMode(RED2, OUTPUT);
}

// Function that turns the green light on and off 
void green_light1() 
{
  digitalWrite(GREEN1, HIGH); // high means to turn it on
  digitalWrite(YELLOW1, LOW); // keep yellow light off
  digitalWrite(RED1, LOW); // keep red light off
  }

 void yellow_light1() 
 {
  digitalWrite(GREEN1, LOW);
  digitalWrite(YELLOW1, HIGH);
  digitalWrite(RED1, LOW);
  }

 void red_light1() 
 {
  digitalWrite(GREEN1, LOW);
  digitalWrite(YELLOW1, LOW);
  digitalWrite(RED1, HIGH); 
  }

// ties all functions together
void stoplight1()
  {
    green_light1();
    delay(DELAY_GREEN1); // held the green light on for the value of DELAY_GREEN1
    yellow_light1();
    delay(DELAY_YELLOW1);
    red_light1();
    delay(DELAY_RED1);
    }

void green_light2() 
{
  digitalWrite(GREEN2, HIGH);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2, LOW);
  }

void yellow_light2()
{
  digitalWrite(GREEN2, LOW);
  digitalWrite(YELLOW2, HIGH);
  digitalWrite(RED2, LOW);
  }

void red_light2() 
{
  digitalWrite(GREEN2, LOW);
  digitalWrite(YELLOW2, LOW);
  digitalWrite(RED2, HIGH);
  }

void stoplight2()
{
  green_light2();
  delay(DELAY_GREEN2);
  yellow_light2();
  delay(DELAY_YELLOW2);
  red_light2();
  delay(DELAY_RED2);
  }


// keeps the lights operating in the way we specified above infinitely
void loop() {
  // High turns things on
  stoplight1();
  digitalWrite(RED1, LOW);
  stoplight2();
  digitalWrite(RED2, LOW);
}
