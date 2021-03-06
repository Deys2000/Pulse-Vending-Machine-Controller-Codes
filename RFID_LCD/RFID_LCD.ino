#include <LiquidCrystal.h>

#include <deprecated.h>
#include <MFRC522.h>
#include <MFRC522Extended.h>
#include <require_cpp11.h>

#include <SPI.h>


#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN); // An instance of the class
MFRC522::MIFARE_Key key;

//int code[] = {4B, 90, C8, 1D}; // This is the stored UID
int codeRead = 0;
String uidString = "4B90C81D";
bool toggle = false;

const int rs = 12, en = 11, d4 = 44, d5 = 45, d6 = 46, d7 = 47;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  
  
  Serial.begin(9600);
  SPI.begin(); // Init SPI bus
  rfid.PCD_Init(); // Init MFRC522

  pinMode( 50, OUTPUT);
  //display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // Initialize with the 12C addr 0x3D (for the 128x64)

  //clear the buffer
}

void loop() {
  // put your main code here, to run repeatedly:

  if( rfid.PICC_IsNewCardPresent()){
    RFID();
    lcd.blink();
    Serial.println("RFID Detected");
  }
  delay(100);
  lcd.noBlink();
  Serial.println("loading");

}

void RFID(){
  if(toggle == false){
    digitalWrite(50,HIGH);
    toggle = !toggle;
  }
  else{
    digitalWrite(50,LOW);
    toggle = !toggle;
  }
  
  
}
