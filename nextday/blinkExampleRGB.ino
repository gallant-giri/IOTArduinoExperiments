int r=9;
int g=8;
int b=7;
int d=200;
void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  delay(50);
  digitalWrite(r,HIGH);
  delay(d);
  digitalWrite(r,LOW);
  delay(d);
  digitalWrite(g,HIGH);
  delay(d);
  digitalWrite(g,LOW);
  delay(d);
  digitalWrite(b,HIGH);
  delay(d);
  digitalWrite(b,LOW);
  delay(d);
  
  delay(50);
  // put your main code here, to run repeatedly:
  
}
