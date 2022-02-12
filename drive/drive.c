void motorinit(){
	//电机初始化函数 
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
	//小车向前移动t时间 
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
	//小车向后移动t时间 
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
	//小车向左平移t时间 
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
	//小车向右平移t时间 
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
	//小车原地转，dir控制转动方向，t控制转动时间
	//dir == u 时为逆时针 
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
