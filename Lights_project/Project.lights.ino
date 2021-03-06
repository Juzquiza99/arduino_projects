/*Este proyecto de Arduino consiste en realizar distintas combinaciones de luces mediante los leds de la placa, en función de los botones que pulsemos.*/
//Declaro las variables
  int but1=12, but2=8, but3=7, but4=4;
  int read1, read2, read3, read4, x;

void setup() {
//Declaro las entradas y salidas
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
  pinMode(but3,INPUT);
  pinMode(but4,INPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(6,OUTPUT);
 }

void loop() {
//Se leen las acciones que llevo a cabo en los botones
  read1=digitalRead(but1);
  read2=digitalRead(but2);
  read3=digitalRead(but3);
  read4=digitalRead(but4);  
  
//Establezco las combinaciones de botones que han de llevarse a cabo para que el 
  if (read1==1 && read2==1){
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(6,LOW);
    delay(1000);
    digitalWrite(9,LOW);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000);
  }//Fin if
  
  if (read3!=0 || read4!=0){
    digitalWrite(6,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(2000);
    digitalWrite(6,LOW);
    digitalWrite(6,LOW);
    digitalWrite(6,LOW);
    digitalWrite(6,LOW);
    delay(1000);
  }//Fin if
  
  if (read1==1 && read2==1 && read3==0 && read4==0){
    for (x=0; x<=255; x++){
      analogWrite(11,x);
      delay(5);
      analogWrite(10,x);
      delay(5);
      analogWrite(9,x);
      delay(5);
      analogWrite(6,x);   
      delay(5); 
    }//Fin for    
  }//Fin if

  if (read1==0 && read2==0 && read3==1 && read4==1){
    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(9,HIGH);
    delay(1000);
    digitalWrite(10,HIGH);
    delay(1000);
    digitalWrite(11,HIGH);
    delay(1000);
    digitalWrite(6,LOW);
    delay(1000);
    digitalWrite(9,LOW);
    delay(1000);
    digitalWrite(10,LOW);
    delay(1000);
    digitalWrite(11,LOW);
    delay(1000);    
  }//Fin if
  
}
