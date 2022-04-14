#include <SoftwareSerial.h>
#define GREEN_LED_PIN 13
#define YELLOW_LED_PIN 12 
#define RED_LED_PIN 11
#define RxD 10
#define TxD 9
#define MOTOR_PIN 8
String value;
int FAN_STATE = 1;
SoftwareSerial bluetooth(TxD, RxD);
int speed = 0;
int valueToInt;
void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);
  pinMode(GREEN_LED_PIN, OUTPUT);
  pinMode(YELLOW_LED_PIN, OUTPUT);
  pinMode(RED_LED_PIN, OUTPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  analogWrite(MOTOR_PIN, speed);
}

void loop() {
 if(bluetooth.available())
   {
    value = bluetooth.readString();
    value.toLowerCase();   
    Serial.println(value);
    if(value == "turn off")
    {
      digitalWrite(RED_LED_PIN, HIGH);
      digitalWrite(YELLOW_LED_PIN, LOW);
      digitalWrite(GREEN_LED_PIN, LOW);
      FAN_STATE = 0;
      speed = 0;
      analogWrite(MOTOR_PIN, speed);
    }
    else{ 
      if(value == "turn on")
        {
         digitalWrite(RED_LED_PIN, HIGH);
         digitalWrite(YELLOW_LED_PIN,HIGH);
         digitalWrite(GREEN_LED_PIN, HIGH);
         delay(1000);
         digitalWrite(RED_LED_PIN, LOW);
         digitalWrite(YELLOW_LED_PIN,LOW);
         digitalWrite(GREEN_LED_PIN, LOW);
         delay(1000);
         digitalWrite(RED_LED_PIN, HIGH);
         digitalWrite(YELLOW_LED_PIN,HIGH);
         digitalWrite(GREEN_LED_PIN, HIGH);
         delay(1000);
         digitalWrite(RED_LED_PIN, LOW);
         digitalWrite(YELLOW_LED_PIN,LOW);
         digitalWrite(GREEN_LED_PIN, LOW);
         delay(1000);
         FAN_STATE = 1;
         speed = 80;
         analogWrite(MOTOR_PIN, speed);
        }
      else{
        valueToInt = value.toInt();
        switch(valueToInt){
         case 0:
           digitalWrite(RED_LED_PIN, LOW);
           digitalWrite(YELLOW_LED_PIN, LOW);
           digitalWrite(GREEN_LED_PIN, LOW);
           FAN_STATE = 0;
           speed = 0;
           analogWrite(MOTOR_PIN, speed);
           break;
           
//         case 1:
//           digitalWrite(RED_LED_PIN, HIGH);
//           digitalWrite(YELLOW_LED_PIN, LOW);
//           digitalWrite(GREEN_LED_PIN, LOW);
//           speed = 80;
//           analogWrite(MOTOR_PIN, speed);
//           break;
           
          case 1:
           digitalWrite(RED_LED_PIN, LOW);
           digitalWrite(YELLOW_LED_PIN, HIGH);
           digitalWrite(GREEN_LED_PIN, LOW);
           speed = 130;
           analogWrite(MOTOR_PIN, speed);
           break;
           
          case 2:
           digitalWrite(RED_LED_PIN, LOW);
           digitalWrite(YELLOW_LED_PIN, LOW);
           digitalWrite(GREEN_LED_PIN, HIGH);
           speed = 255;
           analogWrite(MOTOR_PIN, speed);
           break;
           
          default:
           Serial.println("Incorrect command!");
           break;
        
      }
    }
   }
}
}
