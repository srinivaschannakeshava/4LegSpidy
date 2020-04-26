void cogWalkTrail(){
  l1LegMovement();
  pushOnL1Movement();
  l4LegMovement();
  pushOnL4Movement();
}


void l1LegMovement(){
  
  unsigned long startTime =millis();
  //this sets l1 on balanced mode
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Rot_Servo.write(MID_ANGLE_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     //stretch l1 to forward
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Lif_Servo.write(MIN_ANGLE_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
//setting l1 to balanced lift value
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
//       L1_Lif_Servo.write(BAL_LIFT_VAL);
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
     
 }

 void pushOnL1Movement(){
  unsigned long startTime =millis();
  //this sets l1 on balanced mode
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L2_Rot_Servo.write(MID_ANGLE_VAL);
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
     //l2 and l1 rot goes to balanced angle , l4 rot to mid angle and l3 lift stretched
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
//       L1_Lif_Servo.write(BAL_LIFT_VAL);
       L4_Rot_Servo.write(MID_ANGLE_VAL);
//       L2_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL);
//       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L3_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       SoftwareServo::refresh();
     }  
  
 }



 void l4LegMovement(){
  
  unsigned long startTime =millis();
  //this sets L4 on balanced mode
     while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Rot_Servo.write(MID_ANGLE_VAL);
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       SoftwareServo::refresh();
     }
     //stretch L4 to forward
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L4_Lif_Servo.write(MIN_ANGLE_VAL);
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
//setting L4 to balanced lift value
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
     
 }

 void pushOnL4Movement(){
  unsigned long startTime =millis();
  //this sets L4 on balanced mode
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L3_Rot_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
     }
     //L3 and l4 rot goes to balanced angle , L1 rot to mid angle and l2 lift stretched
     startTime =millis();
     while ((millis() - startTime)<WALK_TIME_LOOP){
       setToBalancedStandValue(); 
       L1_Rot_Servo.write(MID_ANGLE_VAL);
       L2_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
       SoftwareServo::refresh();
     }  
  
 }
