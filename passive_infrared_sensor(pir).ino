#include<Servo.h>

int pir1_signal=10;
int pir2_signal=9;
int pir3_signal=8;
int piezo=7;
int led=13;
int positive=6;
int negative=5;

void setup(){
  pinMode(pir1_signal, INPUT);
  pinMode(pir2_signal, INPUT);
  pinMode(pir3_signal, INPUT);
  pinMode(led, OUTPUT);
  pinMode(piezo, OUTPUT);
  pinMode(positive, OUTPUT);
  pinMode(negative,OUTPUT);
  
  Serial.begin(9600);
}

void loop(){
  
  if (digitalRead(pir1_signal)==HIGH || 
      digitalRead(pir2_signal)==HIGH || 
      digitalRead(pir3_signal)==HIGH){
    digitalWrite(led,HIGH);
    digitalWrite(piezo, HIGH);
    digitalWrite(positive, HIGH);
    digitalWrite(negative, LOW);
    
    Serial.println("Michel Passe");
  
  }
  
  else {
    digitalWrite(positive, LOW);
    digitalWrite(negative, HIGH);
    digitalWrite(led,LOW);
    digitalWrite(piezo, LOW);
    Serial.println("Michel Ne passe pas");
  
  }

  delay(1000);
}
