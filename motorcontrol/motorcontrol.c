void _fr_motor(char dir, int t=100){
  if(dir == 'f'){
    digitalWrite(46, HIGH);
    digitalWrite(47, LOW);
  }
  else{
    digitalWrite(46, LOW);
    digitalWrite(47, HIGH);
  }
  delay(t);
  digitalWrite(46, HIGH);
  digitalWrite(47, HIGH);
}

void _fl_motor(char dir, int t=100){
  if(dir == 'f'){
    digitalWrite(48, HIGH);
    digitalWrite(49, LOW);
  }
  else{
    digitalWrite(48, LOW);
    digitalWrite(49, HIGH);
  }
  delay(t);
  digitalWrite(48, HIGH);
  digitalWrite(49, HIGH);
}

void _br_motor(char dir, int t=100){ 
  if(dir == 'f'){
    digitalWrite(52, HIGH);
    digitalWrite(53, LOW);
  }
  else{
    digitalWrite(52, LOW);
    digitalWrite(53, HIGH);
  }
  delay(t);
  digitalWrite(52, HIGH);
  digitalWrite(53, HIGH);
}

void _bl_motor(char dir, int t=100){
  if(dir == 'f'){
    digitalWrite(50, HIGH);
    digitalWrite(51, LOW);
  }
  else{
    digitalWrite(50, LOW);
    digitalWrite(51, HIGH);
  }
  delay(t);
  digitalWrite(50, HIGH);
  digitalWrite(51, HIGH);
}
