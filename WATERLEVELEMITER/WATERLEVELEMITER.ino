
int lvl;
void setup() {
Serial.begin(1);
   pinMode(12, INPUT);//LVL1
   pinMode(11, INPUT);//LVL2
 pinMode(10, INPUT);//LVL3
  pinMode(9, INPUT);//LVL4
   pinMode(8, INPUT);//LVL5
    pinMode(7, INPUT);//LVL6    
 pinMode(6, INPUT);//LVL7
 pinMode(5, INPUT); //LVL8
  pinMode(4,INPUT);//LVL9
   pinMode(3,INPUT);//LVL10


   
}



void loop() {
  lvl=0;
digitalWrite(12, HIGH); // lvl 1
  digitalWrite(11, HIGH);// lvl 2
  digitalWrite(10, HIGH);//lvl 3
  digitalWrite(9,HIGH);//lvl 4
  digitalWrite(8,HIGH);//lvl 5
digitalWrite(7, HIGH); // lvl 6
  digitalWrite(6, HIGH);// lvl 7
  digitalWrite(5, HIGH);//lvl 8
  digitalWrite(4,HIGH);//lvl 9
  digitalWrite(3,HIGH);//lvl 10



  
  if (digitalRead(12) == LOW) //lvl 1 
{ 
lvl=1;
} 
else

{lvl=0;}




  if (digitalRead(11) == LOW) // lvl 2
{ 
lvl=2;
} 
else
{}




  if (digitalRead(10) == LOW) // lvl 3
{ 
lvl=3;
} 
else
{}







  if (digitalRead(9) == LOW) // lvl 4




{ 
lvl=4;
} 
else
{}
  
  
  
  
  
  
  
  if (digitalRead(8) == LOW) // lvl 5
{ 
lvl=5;
} 
else
{}

  if (digitalRead(7) == LOW) // lvl 6
{ 
lvl=6;
} 
else
{}

  if (digitalRead(6) == LOW) // lvl 7
{ 
lvl=7;
} 
else
{}

  if (digitalRead(5) == LOW) // lvl 8
{ 
lvl=8;
} 
else
{}


  if (digitalRead(4) == LOW) // lvl 9
{ 
lvl=9;
} 
else
{}


  if (digitalRead(3) == LOW) // lvl 10
{ 
lvl=10;
} 
else
{}













 
delay(10);
Serial.println(lvl);

digitalWrite(12, LOW); // lvl 1
  digitalWrite(11, LOW);// lvl 2
  digitalWrite(10, LOW);//lvl 3
  digitalWrite(9,LOW);//lvl 4
  digitalWrite(8,LOW);//lvl 5
digitalWrite(7, LOW); // lvl 6
  digitalWrite(6, LOW);// lvl 7
  digitalWrite(5, LOW);//lvl 8
  digitalWrite(4,LOW);//lvl 9
  digitalWrite(3,LOW);//lvl 10





delay(1000);

}
