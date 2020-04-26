
void waveAllLegs(){
    waveL1();
    waveL2();
    waveL3();
    waveL4();
}
  
void waveL1(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L4_Rot_Servo.write(BAL_ROT_SYNC_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Lif_Servo.write(MIN_ANGLE_VAL);
       L3_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L4_Rot_Servo.write(BAL_ROT_SYNC_VAL);
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){ 
       setToBalancedStandValue(); 
       SoftwareServo::refresh();
    }
}
void waveL2(){

    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L3_Rot_Servo.write(BAL_ROT_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
    startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){
       setToBalancedStandValue(); 
       L2_Lif_Servo.write(MIN_ANGLE_VAL);
       L3_Rot_Servo.write(BAL_ROT_SYNC_VAL);
       L4_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){ 
      setToBalancedStandValue(); 
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
    }
}
void waveL3(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L4_Rot_Servo.write(BAL_ROT_ANTI_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Lif_Servo.write(MIN_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_ANTI_SYNC_VAL);
       L1_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){ 
      setToBalancedStandValue(); 
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
    }
}
void waveL4(){
    unsigned long startTime =millis();
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L2_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L1_Rot_Servo.write(BAL_ROT_SHIT_ANTI_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Lif_Servo.write(MIN_ANGLE_VAL);
       L2_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       L1_Rot_Servo.write(BAL_ROT_SHIT_ANTI_SYNC_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
     }
     startTime =millis();
     while ((millis() - startTime)<WAVE_TIME_LOOP){ 
      setToBalancedStandValue(); 
       L4_Lif_Servo.write(BAL_LIFT_VAL);
       L2_Lif_Servo.write(BAL_LIFT_VAL);
       delay(15);                           // waits for the servo to get there 
       SoftwareServo::refresh();
    }
}
