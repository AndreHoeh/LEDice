
#include "DiceInterface.h"
#include "Random.h"
#include "Config.h"

DiceInterface* output;
int test[7];
Random randm(RANDOM_MIN, RANDOM_MAX);
int buttonState = 0;
int timer = 0;

void diceRoll(){
  for(int i = 10; i < 400; i+=30){
    delay(i);
    (*output).showDigit(randm.getRandomNumber());
  }
}

void setup() {
    output = createDice(DEPICTION);
    Serial.begin(9600);
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    pinMode(LED3, OUTPUT);
    if (DEPICTION != 2){
    pinMode(LED4, OUTPUT);
    pinMode(LED5, OUTPUT);
    pinMode(LED6, OUTPUT);
    pinMode(LED7, OUTPUT);
    }
    pinMode(BUTTON, INPUT);
}

void loop() {
  buttonState = digitalRead(BUTTON);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    buttonState = LOW;
    diceRoll();
    timer = 0
  }

  timer++;
  if (timer == 1000){
      
  }
  
}

