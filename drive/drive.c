void motorinit(){
	//�����ʼ������ 
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
	//С����ǰ�ƶ�tʱ�� 
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
	//С������ƶ�tʱ�� 
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
	//С������ƽ��tʱ�� 
	int i = t*100;
	while(i--){
		digitalWrite(46, LOW);
	 	digitalWrite(49, LOW);
	  	digitalWrite(53, LOW);
	  	digitalWrite(50, LOW);  
	  	delayMircoseconds(600);
	  	digitalWrite(46, LOW);
	 	digitalWrite(49, LOW);
	  	digitalWrite(53, LOW);
	  	digitalWrite(50, LOW);  
	  	delayMircoseconds(400);
	}
    digitalWrite(46, HIGH);
	digitalWrite(49, HIGH);
	digitalWrite(53, HIGH);
	digitalWrite(50, HIGH);
}

void motorrightward(int t){
	//С������ƽ��tʱ�� 
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
	//С��ԭ��ת��dir����ת������t����ת��ʱ��
	//dir == u ʱΪ��ʱ�� 
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
