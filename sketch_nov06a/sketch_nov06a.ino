//int rojo = 9;
//int verde = 10;
//int amarillo = 4;
//int led =9;
//boolean (sube = true);
int led = 9;
int pot = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  
  // initalize digital pin LED_BUILTIN as an output.
  // pinMode(LED_BUILTIN, OUTPUT);
  //pinMode(rojo,OUTPUT);
  //pinMode(amarillo, OUTPUT);
  //pinMode(verde, OUTPUT);
 


}

// the loop function runs over and over again forever
void loop() {
  int valor = analogRead(pot); //lee el valor del potenciometro (letura analogica puede llegar a 1024)
  int v = map(valor,0,1024,0,255); //(mapea el voltaje de 1024 a 255)
  analogWrite(led,v); //(ejecuta un maximo de 255)

}
  //if (sube==true){
    //analogWrite(led,contador);
    //contador = contador + 10;
    //if (contador > 255){
      //sube = false;
    //}
  //}else{
    //analogWrite(led,contador);
    //contador = contador - 10;
    //if(contador<0){
      //sube = true;
 //   }
  //}
  //analogWrite(led,0);
  //delay(500);
  //analogWrite(led,50);
  //delay(500);
  //analogWrite(led,150);
  //delay(500);
  //analogWrite(led,255);
  //delay(500);
  
  // put your main code here, to run repeatedly:
  //digitalWrite(LED_BUILTIN, HIGH); // turn the LED (HIGH is the voltage level)
  //delay(1000);  //wait for a second
 // digitalWrite(LED_BUILTIN, LOW); //turn the LED off by making the voltage LOW
 // delay(1000); //wait for a second
 //digitalWrite(rojo, HIGH);
 //delay(1000);
 //digitalWrite(rojo, LOW);
 //delay(1000);

 //digitalWrite(amarillo, HIGH);
 //delay(1000);
 //digitalWrite(amarillo, LOW);
 //delay(1000);
 
 //digitalWrite(verde, HIGH);
 //delay(1000);
 //digitalWrite(verde, LOW);
 //delay(1000);


//}
