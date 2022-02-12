#include "./sensorcontrol//sensorcontrol.h"
#include "./motorcontrol//motorcontrol.h"
#include "./drive//drive.h" 

//常用函数参考库函数

void setup() {
  motorinit();
}

void loop() {
  // put your main code here, to run repeatedly:
  forward_trace(1);
  
}
