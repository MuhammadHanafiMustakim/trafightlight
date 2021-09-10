void tombolup(){
  int plus1 = 0;
   int button = digitalRead(ENTER);
 if((button==HIGH)&&(led==LOW)){
  plus++; 
     led = HIGH; 
  }else if((button==LOW)&&(led==HIGH)){
    led = LOW;
    } 
   
}
void kontrol(){

  delay(waktu);
  if(plus == 1){
  digitalWrite(MASTER_EN , HIGH);     
  delay(1);                           
  RS485Serial.print('A');           
  RS485Serial.flush();                
  delay(1);
  digitalWrite(MASTER_EN , LOW);      
  plus++;
  } 
   delay(waktu);
    tam12(3,'P');
   delay(waktu);
    tam12(5,'Q');
   delay(waktu);
    tam12(7,'R');
   delay(waktu);
    tam12(9,'S');
   delay(waktu);
    tam12(11,'T');
   delay(waktu);
     tam12(13,'U');
   delay(waktu);
     tam12(15,'V'); //29
   delay(waktu);
     tam12(17,'W');  //28
   delay(waktu);
       tam12(19,'X');
   delay(waktu);
       tam12(21,'Y');
   delay(waktu);
       tam12(23,'Z');
   delay(waktu);
       tam12(25,'a');
   delay(waktu);
       tam12(27,'b');
   delay(waktu);
       tam12(29,'c');
   delay(waktu);
       tam12(31,'d');
   delay(waktu);
     tam12(33,'e');
      delay(waktu);
       tam12(35,'f');
      delay(waktu);
       tam12(37,'g');
      delay(waktu);
      tam12(39,'h');
      delay(waktu);
      tam12(41,'i');
      delay(waktu);
      tam12(43,'j');
      delay(waktu);
      tam12(45,'k');
      delay(waktu);
      tam12(47,'l');
      delay(waktu);
      tam12(49,'m');
      delay(waktu);
      tam12(51,'n');
      delay(waktu);
      tam12(53,'o');
      delay(waktu);
      tam12(55,'p');
      delay(waktu);
      tam12(57,'q');
      delay(waktu);
      tam12(59,'r');
      delay(waktu);
      tam12(61,'s');
      delay(waktu);
      tam12(63,'t');
      delay(waktu);
      tam12(65,'u');
      delay(waktu);
      tam12(67,'v');
      delay(waktu);
       tam12(69,'w');
      delay(waktu);
    if(plus== 71){
  digitalWrite(MASTER_EN , HIGH);  
  delay(1);                          
  RS485Serial.print('x');          
  RS485Serial.flush();               
  digitalWrite(MASTER_EN , LOW);     
  plus=0;hit =0;//dat  = true;
  }
   delay(waktu);
}
void tam12(int nomor,char kar){
   if(plus== nomor){
  digitalWrite(MASTER_EN , HIGH);  
  delay(1);                          
  RS485Serial.print(kar);          
  RS485Serial.flush();               
  delay(1);
  digitalWrite(MASTER_EN , LOW);     
  plus++;
  }
  }
