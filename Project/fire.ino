
 
 void firesensor(){
 // read the sensor on analog A0:
  int sensorReading = analogRead(A0);
  // map the sensor range (four options):
  // ex: 'long int map(long int, long int, long int, long int, long int)'
  int range = map(sensorReading, sensorMin, sensorMax, 0, 3);
  
  // range value:
  switch (range) {
 
  case 1:    // A fire between 1-3 feet away.
    Serial.println("** Distant Fire **");
    
    break;
  case 2:    // No fire detected.
    Serial.println("No Fire");
   //  lcd.clear(); //
    //lcd.setCursor(0, 0);// 
    //lcd.print("no fire");//
    break;
  }
  delay(1);  // delay between reads
   
 }
