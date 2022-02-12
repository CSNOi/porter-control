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

  digitalWrite(46, HIGH);
  digitalWrite(47, HIGH);
  digitalWrite(48, HIGH);
  digitalWrite(49, HIGH);
  digitalWrite(50, HIGH);
  digitalWrite(51, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(53, HIGH);
}

void motorinit(){
  digitalWrite(46, HIGH);
  digitalWrite(47, HIGH);
  digitalWrite(48, HIGH);
  digitalWrite(49, HIGH);
  digitalWrite(50, HIGH);
  digitalWrite(51, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(53, HIGH);
}

void motorforward(int t){
  digitalWrite(47, LOW);
  digitalWrite(49, LOW);
  digitalWrite(53, LOW);
  digitalWrite(51, LOW);  
  delay(t);
  digitalWrite(47, HIGH);
  digitalWrite(49, HIGH);
  digitalWrite(53, HIGH);
  digitalWrite(51, HIGH);
}

void motorbackward(int t){
  digitalWrite(46, LOW);
  digitalWrite(48, LOW);
  digitalWrite(52, LOW);
  digitalWrite(50, LOW);  
  delay(t);
  digitalWrite(46, HIGH);
  digitalWrite(48, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(50, HIGH);
}

void motorleftward(int t){
  digitalWrite(46, LOW);
  digitalWrite(49, LOW);
  digitalWrite(53, LOW);
  digitalWrite(50, LOW);  
  delay(t);
  digitalWrite(46, HIGH);
  digitalWrite(49, HIGH);
  digitalWrite(53, HIGH);
  digitalWrite(50, HIGH);
}

void motorrightward(int t){
  digitalWrite(47, LOW);
  digitalWrite(48, LOW);
  digitalWrite(52, LOW);
  digitalWrite(51, LOW);  
  delay(t);
  digitalWrite(47, HIGH);
  digitalWrite(48, HIGH);
  digitalWrite(52, HIGH);
  digitalWrite(51, HIGH);
}

void selfturn(char dir,int t){
  if(dir == 'u'){
      digitalWrite(47, LOW);
      digitalWrite(48, LOW);
      digitalWrite(53, LOW);
      digitalWrite(50, LOW);  
      delay(t);
      digitalWrite(47, HIGH);
      digitalWrite(48, HIGH);
      digitalWrite(53, HIGH);
      digitalWrite(50, HIGH);
  }
  else{
      digitalWrite(46, LOW);
      digitalWrite(49, LOW);
      digitalWrite(52, LOW);
      digitalWrite(51, LOW);  
      delay(t);
      digitalWrite(46, HIGH);
      digitalWrite(49, HIGH);
      digitalWrite(52, HIGH);
      digitalWrite(51, HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  motorinit();
  motorrightward(1000);
  delay(10000);
}
