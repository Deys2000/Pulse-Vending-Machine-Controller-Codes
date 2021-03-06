int m = 3222; // given delay value between switches
int n = 3; // given number based on student number

void setup() {
  // put your setup code here, to run once:
  #define LED1 24  // telling program that 'LED' is the variable
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
  // blinking the leds in the order of the pattern required
  blink1(m, LED1, LED2, LED3);
  blink1(m, LED2, LED3, LED4);
  blink1(m, LED3, LED4, LED5);
  blink1(m, LED4, LED5, LED6);
  blink1(m, LED5, LED6, LED7);
  blink1(m, LED6, LED7, LED8);
  blink1(m, LED7, LED8, LED1);
  blink1(m, LED8, LED1, LED2);
  
}
/*
 * This method basically takes the time requried to stay on one pattern
 * the 3 leds that need to blink (3 for my case) and does the blinking
 */
void blink1(int timer, int ledNum1, int ledNum2, int ledNum3 ){
  int dec = 1000;
  while(timer > 0){
    timer = timer - dec;
    digitalWrite(ledNum1, LOW);
    digitalWrite(ledNum2, LOW);
    digitalWrite(ledNum3, LOW);
    delay(dec/2);
    digitalWrite(ledNum1, HIGH);
    digitalWrite(ledNum2, HIGH);
    digitalWrite(ledNum3, HIGH);
    delay(dec/2);     
  }
  digitalWrite(ledNum1, LOW);
  digitalWrite(ledNum2, LOW);
  digitalWrite(ledNum3, LOW);
}
