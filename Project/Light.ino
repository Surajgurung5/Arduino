void light()
{
Serial.println(analogRead(A1));
  int ldrStatus = analogRead (ldr);
    if (ldrStatus <=100)
     {
                   
       digitalWrite(led1, HIGH);
       analogWrite(led1,255/5);
       digitalWrite(led2, HIGH);
       analogWrite(led2, 255/5);
        digitalWrite(led3, HIGH);
       analogWrite(led3,255/5);
   
            if (digitalRead(pir1)==HIGH)      
               {
                digitalWrite(led1,HIGH);
                analogWrite(led1,255);      
                digitalWrite(led2,HIGH);
                analogWrite(led2,255);  
                digitalWrite(led3,HIGH);
                analogWrite(led3,255);  
                  delay(7000);
           
                 }
                       else {
                                digitalWrite(led1,HIGH);
                                 analogWrite(led1,255/5);      
                                   digitalWrite(led2,HIGH);
                                   analogWrite(led2,255/5);  
                                      digitalWrite(led3,HIGH);
                                        analogWrite(led3,255/5); 
                              }
                 
                  
              
              
   
      
        
         
         
      }
      else{
         digitalWrite(led1,LOW);
          digitalWrite(led2,LOW);
           digitalWrite(led3,LOW);
      }
}
