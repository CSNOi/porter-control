#define HAVE 1
#define NO 0

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(22,INPUT);
  pinMode(23,INPUT);
  pinMode(24,INPUT);
  pinMode(25,INPUT);
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

int coding_sensor(int f1=0,int f2=0,int f3=0,int f4=0,int f5=0,int f6=0,int f7=0,int f8=0){
  return (f8+f7*2+f6*4+f5*8+f4*16+f3*32+f2*64+f1*128);
}

void forward_trace(int num){
  int f2 = 0;
  int f4 = 0;
  int f5 = 0;
  int f7 = 0;
  digitalWrite(47, LOW);
  digitalWrite(49, LOW);
  digitalWrite(53, LOW);
  digitalWrite(51, LOW);  
  delay(100);
  while(num){
    int statenum = coding_sensor(f2=f2,f4=f4,f5=f5,f7=f7);
        if(statenum == 0){           //f2 == NO && f4 == NO && f5 == NO && f7 == NO
        digitalWrite(46, HIGH);
        digitalWrite(48, HIGH);        
        digitalWrite(47, LOW);
        digitalWrite(49, LOW);
        digitalWrite(53, LOW);
        digitalWrite(51, LOW);  
    }
    else if(statenum == 128){
        digitalWrite(47, HIGH);
        digitalWrite(51, HIGH);
        digitalWrite(49, HIGH);
        digitalWrite(47, LOW);
//        digitalWrite(49, HIGH);
        digitalWrite(53, LOW);
    }
    else if(statenum == 64){           //f2 == NO && f4 == HAVE && f5 == NO && f7 == NO
        digitalWrite(47, HIGH);
        digitalWrite(51, HIGH);
        digitalWrite(47, LOW);
        digitalWrite(49, LOW);
        digitalWrite(53, LOW);
//        digitalWrite(51, LOW);  
    }
    else if(statenum == 32){           //f2 == NO && f4 == NO && f5 == HAVE && f7 == NO
        digitalWrite(49, HIGH);
        digitalWrite(53, HIGH);
        digitalWrite(47, LOW);
        digitalWrite(49, LOW);
//        digitalWrite(53, LOW);
        digitalWrite(51, LOW);  
    }
    else if(statenum == 16){           //f2 == NO && f4 == NO && f5 == NO && f7 == HAVE
        digitalWrite(49, HIGH);
        digitalWrite(53, HIGH);
        digitalWrite(47, HIGH);
        digitalWrite(49, LOW);
        digitalWrite(51, LOW);  
    }
    else if(statenum == 240){
        digitalWrite(46, HIGH);
        digitalWrite(48, HIGH); 
        digitalWrite(47, HIGH);
        digitalWrite(49, HIGH);
        digitalWrite(53, HIGH);
        digitalWrite(51, HIGH);
        num--;
    }       
    delay(50);
    f2 = digitalRead(25);
    f4 = digitalRead(22);
    f5 = digitalRead(23);
    f7 = digitalRead(24);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
//  int f2 = 0;
//  int f4 = 0;
//  int f5 = 0;
//  int f7 = 0;
//  f2 = digitalRead(25);
//  f4 = digitalRead(22);
//  f5 = digitalRead(23);
//  f7 = digitalRead(24);
//  int statenum = coding_sensor(f2=f2,f4=f4,f5=f5,f7=f7);
//  Serial.println(statenum);
//  delay(100);
  delay(1000);
  forward_trace(1);
  delay(10000);
}
