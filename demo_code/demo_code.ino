void setup() {
  // put your setup code here, to run once:
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

}

void lit1() {
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
}

void lit2() {
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
  
}

void lit3() {
          // sp8t2
        digitalWrite(6, HIGH);
        digitalWrite(7, LOW);
        digitalWrite(8, HIGH);
        digitalWrite(9, LOW);
        // sp4t
        digitalWrite(5, HIGH);
    digitalWrite(4, LOW); //v1
        digitalWrite(3, LOW); //v2
}

void loop() {
  // put your main code here, to run repeatedly:
  lit1();
  delay(5000);
  lit3();
  delay(5000);
  lit2();
  delay(5000);
  lit3();
  delay(5000);

  

}
