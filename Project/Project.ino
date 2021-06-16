#include <dht.h>
#include <LiquidCrystal.h>
const int rs=12, en=11, d4=10, d5=9, d6=8, d7=7;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

const int sensorMin = 0;     
const int sensorMax = 1024;  

int led1 = 2;
int led2 = 3;
int led3 = 4;

int ldr = A1;

int pir1 = 5;
int pir2 = 6;
int timer1;
int timer2;

float Time;

int flag1 = 0;
int flag2 = 0;

float distance = 5.0;
float speed;

dht DHT;

#define DHT11_PIN 13


void setup() 
{
  Serial.begin (9600);

  
  lcd.clear();      
  
  lcd.begin(16, 2);
  lcd.clear();
  pinMode (led1,OUTPUT);
   pinMode (led2,OUTPUT); 
   pinMode (led3,OUTPUT);
  
  pinMode (ldr,INPUT);
  
  pinMode (pir1,INPUT);
  pinMode ( pir2, INPUT);
   
}
void loop() 
{


light();
 humidity();
  vehicle();
  firesensor();

  
}

      
