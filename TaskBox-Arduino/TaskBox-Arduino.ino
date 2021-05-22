#include <Keypad.h>

const byte ROWS = 4; 
const byte COLS = 4; 

char matrixKey[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {11, 10, 9, 8}; 
byte colPins[COLS] = {7, 6, 5, 4}; 

Keypad customKeypad = Keypad(makeKeymap(matrixKey), rowPins, colPins, ROWS, COLS); 

void setup(){
  Serial.begin(9600);
}
  
void loop(){
  char keyPressed = customKeypad.getKey();
  
  if (keyPressed){
    Serial.println(keyPressed);
  }
}
