const int numLeds = 10;
const int ledPins[numLeds] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3};
const int pumpPin = 2;  // Pump control pin
const int hydroGeneratorPin = 13; // Hydrogenerator control pin
int lvl = 0;
bool energySurplus = false;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
  pinMode(pumpPin, OUTPUT);
  pinMode(hydroGeneratorPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    lvl = Serial.parseInt();
  }
  
 
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  
  for (int i = 0; i < lvl; i++) {
    digitalWrite(ledPins[i], HIGH);
  }

  
  if (lvl >= 8) {//activate generator
   digitalWrite(pumpPin, LOW);  
   delay(1000);
   digitalWrite(hydroGeneratorPin, HIGH); 
     
    
  } else {
   
  }

  
  if (lvl <= 2) { //activate pump
    digitalWrite(hydroGeneratorPin, LOW); 
    delay(1000);
    digitalWrite(pumpPin, HIGH);  
    
  } else {
    
  }
}
