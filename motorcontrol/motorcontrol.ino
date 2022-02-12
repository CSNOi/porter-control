void setup() {
  // put your setup code here, to run once:
  pinMode(46,OUTPUT);
  pinMode(47,OUTPUT);
  pinMode(48,OUTPUT);
  pinMode(49,OUTPUT);
  pinMode(50,OUTPUT);
  pinMode(51,OUTPUT);
  pinMode(52,OUTPUT);
  pinMode(53,OUTPUT);
}

void _fr_motor(char dir, int time=100){
  if(dir == 'f'){
    digitalWrite(46, HIGH);
    digitalWrite(47, LOW);
  }
  else{
    digitalWrite(46, LOW);
    digitalWrite(47, HIGH);
  }
  delay(time);
  digitalWrite(46, HIGH);
  digitalWrite(47, HIGH);
}

void _fl_motor(char dir, int time=100){
  if(dir == 'f'){
    digitalWrite(48, HIGH);
    digitalWrite(49, LOW);
  }
  else{
    digitalWrite(48, LOW);
    digitalWrite(49, HIGH);
  }
  delay(time);
  digitalWrite(48, HIGH);
  digitalWrite(49, HIGH);
}

void _br_motor(char dir, int time=100){
  if(dir == 'f'){
    digitalWrite(52, HIGH);
    digitalWrite(53, LOW);
  }
  else{
    digitalWrite(52, LOW);
    digitalWrite(53, HIGH);
  }
  delay(time);
  digitalWrite(52, HIGH);
  digitalWrite(53, HIGH);
}

void _bl_motor(char dir, int time=100){
  if(dir == 'f'){
    digitalWrite(50, HIGH);
    digitalWrite(51, LOW);
  }
  else{
    digitalWrite(50, LOW);
    digitalWrite(51, HIGH);
  }
  delay(time);
  digitalWrite(50, HIGH);
  digitalWrite(51, HIGH);
}


void loop() {
  // put your main code here, to run repeatedly:
  _fl_motor('b');
  delay(10000);
}
