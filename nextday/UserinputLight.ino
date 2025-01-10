
#include<stdio.h>

int red=13;
int green=12;
int blue=11;
int buz=5;
int choice;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(buz,OUTPUT);
  Serial.begin(9600);
  
  Serial.println("Enter your Input :  ");
  Serial.println("1. Red\n2. Green\n3. Blue\n");
}

void loop()
{
  
  choice = Serial.parseInt();
//  Serial.println("You Entered : ");
  Serial.print(choice);
  switch(choice){
    case 0: digitalWrite(red,LOW);
            digitalWrite(green,LOW);
            digitalWrite(blue,LOW);
            digitalWrite(buz,LOW);
            break;
    case 1: digitalWrite(red,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(red,LOW);
            digitalWrite(buz,LOW);
            break;
    case 2: digitalWrite(green,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(green,LOW);
            digitalWrite(buz,LOW);
            delay(100);
            digitalWrite(green,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(green,LOW);
            digitalWrite(buz,LOW);
            break;
    case 3: digitalWrite(blue,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(blue,LOW);
            digitalWrite(buz,LOW);
            delay(100);
            digitalWrite(blue,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(blue,LOW);
            digitalWrite(buz,LOW);
            delay(100);
            digitalWrite(blue,HIGH);
            digitalWrite(buz,HIGH);
            delay(100);
            digitalWrite(blue,LOW);
            digitalWrite(buz,LOW);
            break;
  }
}
