/*
 * CAP II: PUERTOS DIGITALES
 * CODIGO3: puertos digitales configurados como entradas
 * OBJETIVOS: Uso de ciclos while, if, for, switch
 * FUNCIONES:
 *           PinMode(pin,MODO)
 *                       MODO->INPUT/OUTPUT
 *                       ESTADO-> HIGH, Low
 *           delay(ms)
 *                 ms-> tiempo en milisegundos
 */
 int led1= 8; // 
 int led2= 9; // 
 int led3=10; //
 int led4=11;
 int led5=12;
 int led6=13;
  
 int boton1=0;
 int boton2=1;
 int boton3=2;
 int boton4=3;
 
 int i; 
 int j; 
 
void setup() {
  pinMode(led1,OUTPUT); // pin 8 como salida
  pinMode(led2,OUTPUT); // pin 9 como salida
  pinMode(led3,OUTPUT); // pin 10 como salida
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(boton1,INPUT); // pin 7 como salida
  pinMode(boton2,INPUT); // pin 6 como salida
  pinMode(boton3,INPUT);
  pinMode(boton4,INPUT);
}

void loop() {
//Juego 1
  if(digitalRead(boton1)==HIGH && digitalRead(boton2)==LOW && digitalRead(boton3)==LOW && digitalRead(boton4)==LOW){
    
    for(i=0;i<10;i++){
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led6,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led6,LOW);
      delay(300);
      }
    }
    
// Juego 2
if(digitalRead(boton2)==HIGH && digitalRead(boton1)==LOW && digitalRead(boton3)==LOW && digitalRead(boton4)==LOW){
    
    for(i=0;i<10;i++){
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led5,LOW);
      delay(300);
      }
    }
// Juego 3
if(digitalRead(boton3)==HIGH && digitalRead(boton1)==LOW && digitalRead(boton2)==LOW && digitalRead(boton4)==LOW){
    
    for(i=0;i<5;i++){
      digitalWrite(led1,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      delay(300);
      digitalWrite(led2,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      delay(300);
      digitalWrite(led3,HIGH);
      delay(300);
      digitalWrite(led3,LOW);
      delay(300);
      digitalWrite(led4,HIGH);
      delay(300);
      digitalWrite(led4,LOW);
      delay(300);
      digitalWrite(led5,HIGH);
      delay(300);
      digitalWrite(led5,LOW);
      delay(300);
      digitalWrite(led6,HIGH);
      delay(300);
      digitalWrite(led6,LOW);
      delay(300);
      }
    }
    // Juego 3
if(digitalRead(boton4)==HIGH && digitalRead(boton1)==LOW && digitalRead(boton2)==LOW && digitalRead(boton3)==LOW){
    
    for(i=0;i<5;i++){
      digitalWrite(led1,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      delay(300);
      digitalWrite(led2,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      delay(300);
      digitalWrite(led3,HIGH);
      delay(300);
      digitalWrite(led3,LOW);
      delay(300);
      digitalWrite(led4,HIGH);
      delay(300);
      digitalWrite(led4,LOW);
      delay(300);
      digitalWrite(led5,HIGH);
      delay(300);
      digitalWrite(led5,LOW);
      delay(300);
      digitalWrite(led6,HIGH);
      delay(300);
      digitalWrite(led6,LOW);
      delay(300);
      digitalWrite(led5,HIGH);
      delay(300);
      digitalWrite(led5,LOW);
      delay(300);
      digitalWrite(led4,HIGH);
      delay(300);
      digitalWrite(led4,LOW);
      delay(300);
      digitalWrite(led3,HIGH);
      delay(300);
      digitalWrite(led3,LOW);
      delay(300);
      digitalWrite(led2,HIGH);
      delay(300);
      digitalWrite(led2,LOW);
      delay(300);
      digitalWrite(led1,HIGH);
      delay(300);
      digitalWrite(led1,LOW);
      delay(300);
      }
    }
}
