#define MIN_ANGLE_VAL 5
#define MID_ANGLE_VAL 43
#define MAX_ANGLE_VAL 85
#define BAL_LIFT_VAL 65
#define BAL_ROT_L_ANGLE_VAL 66
#define BAL_ROT_R_ANGLE_VAL 24

 void setToRestValue(){
     L1_Rot_Servo.write(MID_ANGLE_VAL);                  
     L1_Lif_Servo.write(MID_ANGLE_VAL);
     L2_Rot_Servo.write(MID_ANGLE_VAL);                  
     L2_Lif_Servo.write(MID_ANGLE_VAL);
     L3_Rot_Servo.write(MID_ANGLE_VAL);                
     L3_Lif_Servo.write(MID_ANGLE_VAL);
     L4_Rot_Servo.write(MID_ANGLE_VAL);                 
     L4_Lif_Servo.write(MID_ANGLE_VAL);
}

void setToStandValue(){
     L1_Rot_Servo.write(MID_ANGLE_VAL);                  
     L1_Lif_Servo.write(MAX_ANGLE_VAL);
     L2_Rot_Servo.write(MID_ANGLE_VAL);                  
     L2_Lif_Servo.write(MAX_ANGLE_VAL);
     L3_Rot_Servo.write(MID_ANGLE_VAL);                
     L3_Lif_Servo.write(MAX_ANGLE_VAL);
     L4_Rot_Servo.write(MID_ANGLE_VAL);                 
     L4_Lif_Servo.write(MAX_ANGLE_VAL);
}

void setToBalancedStandValue(){
     L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL);                  
     L1_Lif_Servo.write(BAL_LIFT_VAL);
     
     L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL);                  
     L2_Lif_Servo.write(BAL_LIFT_VAL);
     
     L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL);                
     L3_Lif_Servo.write(BAL_LIFT_VAL);
     
     L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL);                 
     L4_Lif_Servo.write(BAL_LIFT_VAL);
}

void restPosition(){
  unsigned long startTime =millis();
  while ((millis() - startTime)<300){ 
     setToRestValue();
     SoftwareServo::refresh();
  }
}

void liftPosition(){
   unsigned long startTime =millis();
  while ((millis() - startTime)<300){ 
     setToStandValue();
     SoftwareServo::refresh();
  }
 }

 void bancedLiftPosition(){
   unsigned long startTime =millis();
  while ((millis() - startTime)<150){ 
     setToBalancedStandValue();
     SoftwareServo::refresh();
  }
 }
