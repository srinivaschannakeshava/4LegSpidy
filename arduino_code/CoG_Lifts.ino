void doCoGLifts(){
  
  liftL1();
  liftL2();
  liftL3();
  liftL4();
}


void liftL1(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Rot_Servo.write(MID_ANGLE_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Lif_Servo.write(MIN_ANGLE_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
}

void liftL2(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Rot_Servo.write(MID_ANGLE_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L2_Lif_Servo.write(MIN_ANGLE_VAL);
       L1_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
}

void liftL3(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Rot_Servo.write(MID_ANGLE_VAL);
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Lif_Servo.write(MIN_ANGLE_VAL);
       L4_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
}

void liftL4(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Lif_Servo.write(MIN_ANGLE_VAL);
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
}
