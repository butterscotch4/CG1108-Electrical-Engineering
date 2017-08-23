void setup() {
  // put your setup code here, to run once:
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if((digitalRead(1) == HIGH && digitalRead(2) == HIGH) || (digitalRead(1) == LOW && digitalRead(2) == LOW)){
     analogWrite(10, 255/3.5);
     analogWrite(11, 255/3.5);
  }

  else if(digitalRead(1) == HIGH || digitalRead(2) == HIGH){
    if(digitalRead(1) == HIGH){
      analogWrite(10, 255/2.8);
      analogWrite(11, 0);
      delay(0);
    }
    else if(digitalRead(2) == HIGH){
      analogWrite(10, 0);
      analogWrite(11, 255/2.8);
      delay(0);
    }
  }
}
