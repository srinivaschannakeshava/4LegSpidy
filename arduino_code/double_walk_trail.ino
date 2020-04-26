void L1L3FrontMotion(){
  unsigned long startTime =millis();
  //lift the legs L1 and L3
  while ((millis() - startTime)<WALK_ROT_STEP_TIME){ 
    setToBalancedStandValue(); 
     L1_Lif_Servo.write(MID_ANGLE_VAL);
     L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);   
     L3_Lif_Servo.write(MID_ANGLE_VAL);
     L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
     SoftwareServo::refresh();
  }
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue();
         L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
         L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);  
         L1_Lif_Servo.write(BAL_LIFT_VAL);  
         L3_Lif_Servo.write(BAL_LIFT_VAL);
       SoftwareServo::refresh();
  }
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue();
        L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);   
        L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
  
}

void L2L4FrontMotion(){
  unsigned long startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       L2_Lif_Servo.write(MID_ANGLE_VAL);
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L4_Lif_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
 startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue();
         L2_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
         L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);  
         L2_Lif_Servo.write(BAL_LIFT_VAL);  
         L3_Lif_Servo.write(BAL_LIFT_VAL);
       SoftwareServo::refresh();
  }
 startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
        L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
        L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
  
}
