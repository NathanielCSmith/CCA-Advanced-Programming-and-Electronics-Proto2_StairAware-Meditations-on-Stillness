// Chapter 7 - Communications
// I2C Master
// By Cornel Amariei for Packt Publishing

// Include the required Wire library for I2C
#include <Wire.h>

int x = 0;
int LED = 13;

void setup() {
  // Start the I2C Bus as Master
  Wire.begin();
  pinMode(LED, OUTPUT);
  Serial.begin(230400);
}

/*
  Master Arduino Code Put This Stuff In Here
  pulls info.
  Ask that to each slave.
  Getting a yes or no step answer.
  Periodical Check-query.
  Sends back a message turn on or turn off (sets lights message)
  Two slaves: One is 9 and the other is 10
*/


void loop() {

  boolean a, b;

  Serial.println("Checking for data... on 9...");

  //sending a message to 9
  Wire.requestFrom(9, 1); // transmit to device #9
//  Wire.write(2);              // sends x
//  Wire.endTransmission();    // stop transmitting
  delay(1);
  if (Wire.available() >= 1) {
    Serial.print("Got data from 9: ");
    a = (Wire.read() == '1');
    Serial.println(a);
  }

  Serial.println("on 10...");
  //sending a message to 10
  Wire.requestFrom(10, 1); // transmit to device #9
//  Wire.write(2);              // sends x
//  Wire.endTransmission();    // stop transmitting
  delay(1);
  if (Wire.available() >= 1) {
    b = (Wire.read() == '1');
  }

  if (a == 1 || b == 1) {
    digitalWrite(LED, HIGH);
    Wire.beginTransmission(9); // transmit to device #9
    Wire.write('1');              // sends x
    Wire.endTransmission();    // stop transmitting
    Wire.beginTransmission(10); // transmit to device #10
    Wire.write('1');              // sends x
    Wire.endTransmission();    // stop transmitting
  }
  else {
    digitalWrite(LED, LOW);
    Wire.beginTransmission(9); // transmit to device #9
    Wire.write('0');              // sends x
    Wire.endTransmission();    // stop transmitting
    Wire.beginTransmission(10); // transmit to device #10
    Wire.write('0');              // sends x
    Wire.endTransmission();    // stop transmitting
  }
  

  //slave id's assign them.
  //Q1.What is your status(is someone there?)?

  delay(500);
}

