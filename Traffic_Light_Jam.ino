// Define the pin which the LED is connected to
//220k resistors
//LED cables to the pins below
//ground cables to any grnd on board

//RED
#define LED_PIN_Red 6
//Amber
#define LED_PIN_Amber 5
//Green
#define LED_PIN_Green 3

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

  //Green
  digitalWrite(LED_BUILTIN, HIGH);   // turn the onboard LED on (HIGH is the voltage level)
  analogWrite(LED_PIN_Green, 255);   // turn the green LED on
  delay(4000);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the onboard LED off by making the voltage LOW
  analogWrite(LED_PIN_Green, 0);     // turn the green LED off
  delay(200);                        // wait

  //Amber (flash)
  digitalWrite(LED_BUILTIN, HIGH);   // turn the onboard LED on
  analogWrite(LED_PIN_Amber, 255);   // turn the amber LED on
  delay(400);                        // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the onboard LED off
  analogWrite(LED_PIN_Amber, 0);     // turn the amber LED off
  delay(400);                        // wait
   digitalWrite(LED_BUILTIN, HIGH);  // turn the onboard LED on
  analogWrite(LED_PIN_Amber, 255);   // turn the amber LED on
  delay(400);                        // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the onboard LED off
  analogWrite(LED_PIN_Amber, 0);     // turn the amber LED oFF
  delay(400);                        // wait
  digitalWrite(LED_BUILTIN, HIGH);   // turn the onboard LED on
  analogWrite(LED_PIN_Amber, 255);   // turn the amber LED on
  delay(400);                        // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the onboard LED off
  analogWrite(LED_PIN_Amber, 0);     // turn the amber LED off
  delay(200);                        // wait

  //Red ONLY
  digitalWrite(LED_BUILTIN, HIGH);   // turn the onboard LED on
  analogWrite(LED_PIN_Red, 255);     // turn the red LED on
  delay(2000);                       // wait

  //Red AND Amber
  analogWrite(LED_PIN_Amber, 255);   // turn the amber LED on
  delay(2000);                       // wait
  digitalWrite(LED_BUILTIN, LOW);    // turn the onboard LED off
  analogWrite(LED_PIN_Red, 0);       // turn the red LED off
  analogWrite(LED_PIN_Amber, 0);     // turn the amber LED off
  delay(200);                        // wait







}
