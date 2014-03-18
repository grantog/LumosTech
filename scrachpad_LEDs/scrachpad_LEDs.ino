/*
 vanessa
 basic Arduino program to blink several LEDs
 */
 
int led = 12;
int led2 = 11; 


// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);  
  pinMode(led2, OUTPUT);  
}

// the loop routine runs over and over again forever:
// turn LED on, wait 50ms, shut off, wait for 2 seconds
void loop() {
  delay(1000);
  digitalWrite(led, HIGH); 
  digitalWrite(led2, HIGH);  
  delay(1000);               
  digitalWrite(led, LOW);  
  digitalWrite(led2, LOW);   
  delay(1000);               
}
