int valorPot = 0;
  
void setup(){

   pinMode(1, INPUT);
   pinMode(2, INPUT);

   pinMode(3, INPUT);
  pinMode(8, INPUT);
}

void loop(){
  valorPot = analogRead(A0);
  analogWrite(3,valorPot/3);
  analogWrite(2,valorPot/2);
  analogWrite(1,valorPot/1);
}
