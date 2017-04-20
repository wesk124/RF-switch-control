
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
  
  if (Serial.available() > 0) {
    //TODO add control pin for sp8t;
     intRead = Serial.read();
     if (intRead == 49) {
        Serial.print("I get rf1 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(13, HIGH);
        // sp8t2
        digitalWrite(6, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2

      } // end of rf1
      else if (intRead == 50) {
        Serial.print("I get rf2 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(13, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
      }// end of rf2

      else if (intRead == 51) {
        Serial.print("I get rf3 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
      }// end of rf3
      else if (intRead == 52) {
        Serial.print("I get rf4 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
      }// end of rf4
      else if (intRead == 53) {
        Serial.print("I get rf5 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
      }// end of rf5
      else if (intRead == 54) {
        Serial.print("I get rf6 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(12, HIGH);
        digitalWrite(13, LOW);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
        
      }// end of rf6
      else if (intRead == 55) {
        Serial.print("I get rf7 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
        
      }// end of rf7
      else if (intRead == 56) {
        Serial.print("I get rf8 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);
        digitalWrite(10, LOW);
        digitalWrite(12, LOW);
        digitalWrite(13, LOW);

        // sp8t2

        digitalWrite(6, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, HIGH); //v1
        digitalWrite(3, LOW); //v2
        
      }// end of rf8
      else if (intRead == 57) {
        Serial.print("I get rf9 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2
        
      }// end of rf9
      else if (intRead == 97) {
        Serial.print("I get rf10 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2
        
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(9, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2
        
      }// end of rf10

      else if (intRead == 98) {
        Serial.print("I get rf11 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf11
     else if (intRead == 99) {
        Serial.print("I get rf12 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, HIGH);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf12
     else if (intRead == 100) {
        Serial.print("I get rf13 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2

        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        // sp4t        
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf13
     else if (intRead == 101) {
        Serial.print("I get rf14 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf14
     else if (intRead == 102) {
        Serial.print("I get rf15 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf15
     else if (intRead == 103) {
        Serial.print("I get rf16 ");
        Serial.println(intRead, DEC);
        // sp8t1
        digitalWrite(11, HIGH);

        // sp8t2
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, LOW);
        digitalWrite(9, LOW);
        // sp4t
        digitalWrite(5, HIGH);
		digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2

      }// end of rf16 

      else {

		// Shutdown everything...
        Serial.print("Shutdown.... ");
        digitalWrite(11, LOW);
        digitalWrite(6, LOW);
		digitalWrite(5, LOW);
      }
  }
}
      
     
      

  


  
