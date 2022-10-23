#include <SoftwareSerial.h>
SoftwareSerial mySerial(3,2);// pin tx,rx
#define ENA 7
#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11
#define ENB 12

int data=0;

void setup() {
  // put your setup code here, to run once:
  bluetoth.begin(9600);
pinMode(ENA, OUTPUT);
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(ENB, OUTPUT);  
}

void loop(){
  if(bluetooth.available)()>0{
    data = bluetooth.read();
    }
    if (data == 'F'){
      Maju();
      }
          if (data == 'B'){
      Mundur();
      }
          if (data == 'L'){
      Kiri();
      }
          if (data == 'R'){
      Kanan();
      }
           if (data == 'G'){
      mundur_kanan();
      }    
           if (data == 'I'){
      mundur_kiri();
      }
            if (data == 'H'){
      maju_belok_kanan_total();
      }
            if (data == 'J'){
      maju_belok_kiri_total();
      }
            if (data == 'S'){
      Stopl();
      }
      
    
  }
void Maju() {
  analogWrite (ENA, 255);
  analogWrite (ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH); 
  }

void Mundur() {
  analogWrite (ENA, 255);
  analogWrite (ENB, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW); 
  }

void Kiri() {
  analogWrite (ENA, 255);
  analogWrite (ENB, 127);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void Kanan() {
  analogWrite (ENA, 127);
  analogWrite (ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void mundur_kanan() {
  analogWrite (ENA, 127);
  analogWrite (ENB, 255);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void mundur_kiri() {
  analogWrite (ENA, 255);
  analogWrite (ENB, 127);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
} 

void maju_belok_kanan_total() {
  analogWrite (ENA, 255);
  analogWrite (ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}   


void maju_belok_kiri_total() {
  analogWrite (ENA, 0);
  analogWrite (ENB, 255);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}  

void Stopl() {
  analogWrite (ENA, 0);
  analogWrite (ENB, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
} 

  
  
  }    
