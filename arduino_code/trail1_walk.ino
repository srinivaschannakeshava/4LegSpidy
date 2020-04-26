
void l1FrontMotion(){
  unsigned long startTime =millis();

//  startTime =millis();
//  // this is take balanced position
//  while ((millis() - startTime)<WAVE_SET_UP_TIME_LOOP){ 
//    setToBalancedStandValue(); 
//  //   L3_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
// //    L4_Rot_Servo.write(BAL_ROT_SYNC_VAL);
//     SoftwareServo::refresh();
//  }
  //this lifts l1 at a 20 degre front
  startTime =millis();
  while ((millis() - startTime)<WALK_ROT_STEP_TIME){ 
    setToBalancedStandValue(); 
   //  L3_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
 //    L4_Rot_Servo.write(BAL_ROT_SYNC_VAL);
     L1_Lif_Servo.write(MID_ANGLE_VAL);
     L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);   
     SoftwareServo::refresh();
  }
  /// place l1 to a 20degree with balance lift value
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
    setToBalancedStandValue(); 
    L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
     SoftwareServo::refresh();
  }
  
}

void l2FrontMotion(){
  unsigned long startTime =millis();
// this is take balanced position
//  startTime =millis();
//  while ((millis() - startTime)<WALK_ROT_STEP_TIME){ 
//      setToBalancedStandValue(); 
//       // retain l1 rot value
//       L1_Rot_Servo.write(STEP_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
//      // L4_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
//     //  L3_Rot_Servo.write(BAL_ROT_SYNC_VAL);
//       SoftwareServo::refresh();
//  }
  //this lifts l2 at a 20 degre front
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       // retain l1 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
     //  L4_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
     //  L3_Rot_Servo.write(BAL_ROT_SYNC_VAL);  
       L2_Lif_Servo.write(MID_ANGLE_VAL);
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }

 startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       // retain l1 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
  
}

void l3FrontMotion(){
  unsigned long startTime =millis();
//  startTime =millis();
//  // this is take balanced position
//  while ((millis() - startTime)<WALK_ROT_STEP_TIME){ 
//      setToBalancedStandValue(); 
//       // retain l1 and l2 rot value
//       L1_Rot_Servo.write(STEP_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
//       L2_Rot_Servo.write(STEP_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
//   //    L1_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
//    //   L4_Rot_Servo.write(BAL_ROT_ANTI_SYNC_VAL);
//       SoftwareServo::refresh();
//  }
  //this lifts l3 at a 20 degre front
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       // retain l1 and l2 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
     //  L1_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
    //   L4_Rot_Servo.write(BAL_ROT_ANTI_SYNC_VAL);  
       L3_Lif_Servo.write(MID_ANGLE_VAL);
       L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }

 startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       // retain l1 and l2 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
  
}
void l4FrontMotion(){
  unsigned long startTime =millis();
//// // this is take balanced position
//  while ((millis() - startTime)<WALK_ROT_STEP_TIME){ 
//      setToBalancedStandValue(); 
//      // retain l1 l2 and l3 rot value
//       L1_Rot_Servo.write(STEP_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
//       L2_Rot_Servo.write(STEP_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
//       L3_Rot_Servo.write(STEP_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
//   //    L2_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
////       L1_Rot_Servo.write(BAL_ROT_SHIT_ANTI_SYNC_VAL);
//       SoftwareServo::refresh();
//  }
  //this lifts l3 at a 20 degre front
  startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
      // retain l1 l2 and l3 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
     //   L2_Lif_Servo.write(BAL_LIFT_SYNC_VAL);
//       L1_Rot_Servo.write(BAL_ROT_SHIT_ANTI_SYNC_VAL);;  
       L4_Lif_Servo.write(MID_ANGLE_VAL);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }

 startTime =millis();
   while ((millis() - startTime)<WALK_TIME_LOOP){ 
       setToBalancedStandValue(); 
       // retain l1 l2 and l3 rot value
       L1_Rot_Servo.write(BAL_ROT_L_ANGLE_VAL+WALK_ANGLE_STEP_VALUE); 
       L2_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L3_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL+WALK_ANGLE_STEP_VALUE);
       L4_Rot_Servo.write(BAL_ROT_R_ANGLE_VAL-WALK_ANGLE_STEP_VALUE);
       SoftwareServo::refresh();
  }
}
