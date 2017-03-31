
/**
 * Author: Sheng Wei
 * Date: 03-10-2017
 * Description: This file contains the controlling
 *             function of controllng circuit.
 */
 
// Global Variables: 
char intRead;




/**
 * Author: Sheng Wei
 * Date: 03-10-2017
 * Description: Setup GPIO: pins 8-12 are output
 *             
 */
void setup() {
  // Set 8-13 pins to output. we do not need any input 
  // signal

  // Serial baud rate setup

  Serial.begin(9600);

  pinMode(2, OUTPUT); // SP8T ctrl0
  pinMode(3, OUTPUT); // SP8T ctrl1
  pinMode(4, OUTPUT); // SP8T ctrl2
  pinMode(5, OUTPUT); // SP8T ctrl0
  pinMode(6, OUTPUT); // SP8T ctrl1
  pinMode(7, OUTPUT); // SP8T ctrl2
  pinMode(8, OUTPUT); // SP8T ctrl0
  pinMode(9, OUTPUT); // SP8T ctrl1
  pinMode(10, OUTPUT); // SP8T ctrl2
  pinMode(11, OUTPUT); // SP4T ctrl0
  pinMode(12, OUTPUT); // SP4T ctrl0
  pinMode(13, OUTPUT); // SP4T ctrl1


  //digitalWrite(13, LOW);
}

/*

void switch(int number) {
  if (num < 0 && num > 15) {
    Serial.print("The number should be in 0 - 15.\n");
  return;
  }
switch (pinNum) {
  case 0:
  //TODO: fill in digitalWrite();
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  
  default:
    break;
  }  
}
*/


void loop() {
  // put your main code here, to run repeatedly:
  /*
  if (Serial.available() > 0) {
    //TODO add control pin for sp8t;
     intRead = Serial.read();
     if (intRead == 49) {
        Serial.print("I get sp4t rf1 ");
        Serial.println(intRead, DEC);
        
        digitalWrite(9, LOW);
        digitalWrite(10, LOW);
        digitalWrite(13, HIGH);
      }
      else if (intRead == 50) {
        Serial.print("I get sp4t rf2 ");
        Serial.println(intRead, DEC);
        digitalWrite(9, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(13, HIGH);
      }
      else {
         digitalWrite(13, LOW);
      }*/

      digitalWrite(11, HIGH);

      
 }
  


  
