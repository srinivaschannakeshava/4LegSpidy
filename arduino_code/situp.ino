void sitUps(){
   unsigned long startTime =millis();
  while ((millis() - startTime)<3000){ 
     restPosition();
     liftPosition();
  }
}
