int timeDelay = 50;

void setup() {
  //put your setup here to run once
  #define LED1 24  // telling program that 'LED' is the variable for pin 13
  #define LED2 28
  #define LED3 32
  #define LED4 36
  #define LED5 40
  #define LED6 44
  #define LED7 48
  #define LED8 52
  pinMode(LED1,OUTPUT); //configuring pins to be an output pin
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);
  pinMode(LED8,OUTPUT);
}

void loop() {
    //[put your main code here, to run repeatedly
    digitalWrite(LED1,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED1,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED2,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED2,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED3,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED3,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED4,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED4,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED5,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED5,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED6,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED6,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED7,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED7,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
    digitalWrite(LED8,HIGH); // making the 'LED' pin apply a 3.3V to the outside
    delay(timeDelay); // an idle setup command, it works in milliseconds
    digitalWrite(LED8,LOW); // making the 'LED' pin apply a 0V to the outside
    delay(timeDelay);
}

// program successful
//
// Learned:
// Pin 13 is internally connected to the 'L' LED on the board
// You can give each pin a name
