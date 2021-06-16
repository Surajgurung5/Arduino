








void vehicle()
{
if(digitalRead (pir1) == HIGH && flag1==0){timer1 = millis(); flag1=1;}

if(digitalRead (pir2) == HIGH && flag2==0){timer2 = millis(); flag2=1;}

if (flag1==1 && flag2==1){
     if(timer1 > timer2){Time = timer1 - timer2;}
else if(timer2 > timer1){Time = timer2 - timer1;}
 Time=Time/1000;//convert millisecond to second
 speed=(distance/Time);//v=d/t
 speed=speed*3600;//multiply by seconds per hr
 speed=speed/1000;//division by meters per Km
}

if(speed==0){ 
//lcd.setCursor(0, 1); 
if(flag1==0 && flag2==0)
{
//{lcd.print("No car  detected");}
                    //else{lcd.print("Searching...    ");} 
}
else{
   // lcd.clear(); 
    //lcd.setCursor(0, 0); 
    //lcd.print("Speed:");
    //lcd.print(speed,1);
    //lcd.print("Km/Hr  ");
    
   // lcd.setCursor(0, 1); 
  if(speed > 50)
  //{lcd.print("  Over Speeding  "); }
           // else{lcd.print("  Normal Speed   "); }    
   
   delay(4000);
    speed = 0;
    flag1 = 0;
    flag2 = 0; 
   // lcd.clear();   
 }
}
}
