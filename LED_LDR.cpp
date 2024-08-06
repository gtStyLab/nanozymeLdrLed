/*Program code that correlates LDR intensity with LED output based on sarcosine concentrations. 
Variations in sarcosine concentrations will alter the light intensity affecting the LDR. */

const int ledPin1 = 13;
const int ledPin2 = 12;   //the number of the LED pin
const int ledPin3 = 11;
const int ledPin4 = 10;
const int ldrPin = A0;  //the number of the LDR pin

void setup() {

  Serial.begin(9000);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);  //initialize the LED pin as an output
  pinMode(ldrPin, INPUT);   //initialize the LDR pin as an input
}

void loop() {

  int ldrStatus = analogRead(ldrPin);   //read the status of the LDR value

  //check if the LDR status is <= 300
  //if it is, the LED is HIGH

   if (ldrStatus <=120) {

    digitalWrite(ledPin1, HIGH);               //turn LED on
    
    
   }
  else {

    digitalWrite(ledPin1, LOW);          //turn LED off
  }
  if (ldrStatus <=70) {

    digitalWrite(ledPin2, HIGH);               //turn LED on
    
   }
  else {

    digitalWrite(ledPin2, LOW);          //turn LED off
    
  }
   if (ldrStatus <=90) {

    digitalWrite(ledPin3, HIGH);               //turn LED on

    
   }
  else {

    digitalWrite(ledPin3, LOW);          //turn LED off
  }
  if (ldrStatus <=100) {

    digitalWrite(ledPin4, HIGH);               //turn LED on
    
    
   }
  else {

    digitalWrite(ledPin4, LOW);          //turn LED off
  }
       
}

