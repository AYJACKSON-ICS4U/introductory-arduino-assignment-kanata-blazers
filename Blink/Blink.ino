/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

unsigned long interval = 500; // the time we need to wait between LED state switches
unsigned long previousMillis = 0; // millis() returns an unsigned long.
 
bool ledState = false; // state variable for the LEDs

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  unsigned long int currentMillis = millis(); // Get the current time in a long positive int

  // Check if the time between the last blink and the current time is greater or equal to the desired interval between blinks
 if (currentMillis - previousMillis >= interval) {

   // Switch the lights state

   ledState = !ledState;
   digitalWrite(13, !ledState);

   // Save the current time
   previousMillis = millis();
 }
}
