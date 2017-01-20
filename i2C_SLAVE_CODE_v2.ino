/*************************
  Course | Advanced Programming & Electronics
  Verison | 0.0
  Date | 2017.1.19
  Project | Stair Aware: Meditations on Stillness Proto 1
  Name | Nathaniel Smith
*************************/

//1411


// Include the required Wire library for I2C
#include <Wire.h>

#include <Adafruit_DotStar.h>
// Because conditional #includes don't work w/Arduino sketches...
#include <SPI.h>         // COMMENT OUT THIS LINE FOR GEMMA OR TRINKET

int LED = 13;
int x = 0;

//PUT IN DATA PIN CLOCK PIN STUFF HERE and check on LED units!!!!
#define DATAPIN    13
#define CLOCKPIN   11
#define NUMPIXELS 144 // Number of LEDs in strip (DOUBLE CHECK!!!!)

Adafruit_DotStar strip = Adafruit_DotStar(
                           NUMPIXELS, DATAPIN, CLOCKPIN, DOTSTAR_BRG);

void setup() {
  // Define the LED pin as Output
  pinMode (LED, OUTPUT);
  // Start the I2C Bus as Slave on address 9
  Wire.begin(9);
  // Attach a function to trigger when something is received.
  Wire.onReceive(receiveEvent);
  Wire.onRequest(requestEvent);
  Serial.begin(230400);
  Serial.println("STARTING...");

  //  FIX THIS!!!!
  strip.begin(); // Initialize pins for output
  strip.show();  // Turn all LEDs off ASAP
}

void receiveEvent(int bytes) {
  x = Wire.read();    // read one character from the I2C

  //THE DOT STAR CODE ALL GOES IN HERE
  //Dot star on off currently commented out need to fix!!!

  if (x == '0') {
    //turn off
    for (int i = 0; i < 144; ++i) { //check 140 might be different cant remember
      strip.setPixelColor(i, 0);
    }
    strip.show();
    //    digitalWrite(LED, LOW);
    //    Serial.println("OFF");
  }

  if (x == '1') {
    //turn on
    for (int i = 0; i < 140; ++i) { //check 140 might be different cant remember
      strip.setPixelColor(i, 255);
    }
    strip.show();
    //    digitalWrite(LED, HIGH);
    //    Serial.println("ON");
  }
}

//uncomment sensor values later!!!1
void requestEvent() {
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = 0; //analogRead(A3);
  int sensorValue4 = 0; //analogRead(A4);
  int sensorValue5 = 0; //analogRead(A5);


  // print out the value you read://dont need this just for testing
  Serial.print("      A0: "); Serial.print(sensorValue0);
  Serial.print("      A1: "); Serial.print(sensorValue1);
  Serial.print("      A2: "); Serial.print(sensorValue2);
  Serial.print("      A3: "); Serial.print(sensorValue3);
  Serial.print("      A4: "); Serial.print(sensorValue4);
  Serial.print("      A5: "); Serial.println(sensorValue5);

  //make one of these for each sensors
  //sensor tests
  char output = '0';
  if (sensorValue0 > 45) {
    output = '1';//turn on
  }

  if (sensorValue1 > 45) {
    output = '1';//turn on
  }
  if (sensorValue2 > 45) {
    output = '1';//turn on
  }
  if (sensorValue3 > 45) {
    output = '1';//turn on
  }
  if (sensorValue4 > 45) {
    output = '1';//turn on
  }
  if (sensorValue5 > 45) {
    output = '1';//turn on
  }
  Wire.write(&output, 1);
  //  Wire.endTransmission();
}

void loop() {
  //  //If value received is 0 blink LED for 200 ms
  //  if (x == '0') {
  //    digitalWrite(LED, HIGH);
  //    delay(200);
  //    digitalWrite(LED, LOW);
  //    delay(200);
  //  }
  //  //If value received is 3 blink LED for 400 ms
  //  if (x == '3') {
  //    digitalWrite(LED, HIGH);
  //    delay(400);
  //    digitalWrite(LED, LOW);
  //    delay(400);
  //  }
}

