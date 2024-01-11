int lvl=0;

void setup() {
 Serial.begin(1);

pinMode(12,OUTPUT);//lvl 1 
pinMode(11,OUTPUT);//lvl 2
pinMode(10,OUTPUT);// lvl 3 
pinMode(9,OUTPUT);// lvl 4
pinMode(8,OUTPUT);// lvl 5
pinMode(7,OUTPUT);// lvl 6 
pinMode(6,OUTPUT);// lvl 7
pinMode(5,OUTPUT);// lvl 8 
pinMode(4,OUTPUT);// lvl 9
pinMode(3,OUTPUT);// lvl 10  



digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}


void loop() {
   if (Serial.available() > 0) {
               
        lvl = Serial.parseInt();

   }
  
if(lvl == 1){
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);

 
}



if(lvl == 2){
  
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
}


if(lvl == 3){
  
 digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);

}

if(lvl == 4){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);


 
}

if(lvl == 5){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);

 
}





if(lvl == 6){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH );
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
 
}


if(lvl == 7){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH );
digitalWrite(6,HIGH);
digitalWrite(5,LOW);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
 
}


if(lvl == 8){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH );
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(3,LOW);
 
}


if(lvl == 9){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH );
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
 
}

if(lvl == 10){
  digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,HIGH);
digitalWrite(8,HIGH);
digitalWrite(7,HIGH );
digitalWrite(6,HIGH);
digitalWrite(5,HIGH);
digitalWrite(4,HIGH);
digitalWrite(3,HIGH);
 
}
















}
