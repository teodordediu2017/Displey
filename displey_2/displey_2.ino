const int led1=5;
const int led2=6;
const int led3=7;
 
int valor = 0;

void setup() {

pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(3, INPUT);
valor = digitalRead(3);
}

void loop()
{

if(valor =0)
{
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  delay(500);
  digitalWrite(led1,0);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  delay(500);
  digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  delay(500);
    digitalWrite(led1,0);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  delay(500);
      digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,0);
  delay(500);
        digitalWrite(led1,1);
  digitalWrite(led2,0);
  digitalWrite(led3,1);
  delay(500);
     digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,0);
  delay(500);
    digitalWrite(led1,1);
  digitalWrite(led2,1);
  digitalWrite(led3,1);
  delay(500);
  
  
}



 }

