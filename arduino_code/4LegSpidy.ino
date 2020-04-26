#include <SoftwareServo.h> 
SoftwareServo L1_Rot_Servo,L1_Lif_Servo;  // create servo object to control a servo 
SoftwareServo L2_Rot_Servo,L2_Lif_Servo;
SoftwareServo L3_Rot_Servo,L3_Lif_Servo;
SoftwareServo L4_Rot_Servo,L4_Lif_Servo;


#define MIN_ANGLE_VAL 5
#define MID_ANGLE_VAL 43
#define MAX_ANGLE_VAL 85
#define BAL_LIFT_VAL 65
#define BAL_ROT_L_ANGLE_VAL 66
#define BAL_ROT_R_ANGLE_VAL 24

#define BAL_LIFT_SYNC_VAL 50
#define BAL_ROT_SYNC_VAL 15
#define BAL_ROT_ANTI_SYNC_VAL 35
#define BAL_ROT_SHIT_ANTI_SYNC_VAL 75

#define WALK_TIME_LOOP 75
#define WALK_ROT_STEP_TIME 75
#define WAVE_SET_UP_TIME_LOOP 175
#define WAVE_TIME_LOOP 300


#define WALK_ANGLE_STEP_VALUE 25


void setup() 
{ 
  L1_Rot_Servo.attach(2);  // attaches the servo on pin 2 to the servo object 
  L1_Lif_Servo.attach(3);
  L2_Rot_Servo.attach(4);  // attaches the servo on pin 2 to the servo object 
  L2_Lif_Servo.attach(5);
  L3_Rot_Servo.attach(6);  // attaches the servo on pin 2 to the servo object 
  L3_Lif_Servo.attach(7);
  L4_Rot_Servo.attach(8);  // attaches the servo on pin 2 to the servo object 
  L4_Lif_Servo.attach(9);
} 
void loop() 
{ 
 // walk();
 // restPosition();
//  delay(3000);
// bancedLiftPosition();
// 
// waveAllLegs();
// sitUps();
//l1FrontMotion();
//l2FrontMotion();
//l3FrontMotion();
//l4FrontMotion();
// L1L3FrontMotion();
// bancedLiftPosition();
//liftL1();
//liftL2();
//liftL3();
//liftL4();
//l4LegMovement();
//delay(1000);
//pushOnL4Movement();
//delay(1000);

 unsigned long startTime =millis();
// walk for 5 sec
  while ((millis() - startTime)<5000){
    cogWalkTrail();
  }

  sitUps();
  startTime =millis();
while ((millis() - startTime)<3000){
    doCoGLifts();
  }

//  L2L4FrontMotion();
//bancedLiftPosition();

} 


void walk(){
  l1FrontMotion();
  l3FrontMotion();
  l4FrontMotion();
  l2FrontMotion();
  liftPosition();
 }
 
