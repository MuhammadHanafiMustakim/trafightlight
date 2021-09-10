void kontrol1(){
  if(plus == 1){
  digitalWrite(MASTER_EN , HIGH);     
  delay(1);                           
  RS485Serial.print('A');           
  RS485Serial.flush();                
  delay(1);
  digitalWrite(MASTER_EN , LOW);      
  plus++;
  } 
     tam12(3,'V'); //29
   delay(waktu);
     tam12(5,'W');
   delay(waktu);
       tam12(7,'X');
   delay(waktu);
       tam12(9,'Y');
   delay(waktu);
       tam12(11,'Z');
   delay(waktu);
       tam12(13,'a');
   delay(waktu);
       tam12(15,'b');
   delay(waktu);
       tam12(17,'c'); //22
   delay(waktu);
       tam12(19,'d'); //21
   delay(waktu);
     tam12(21,'e');   //20
      delay(waktu);
       tam12(23,'f');
      delay(waktu);
       tam12(25,'g');
      delay(waktu);
      tam12(27,'h');
      delay(waktu);
      tam12(29,'i');
      delay(waktu);
      tam12(31,'j');
      delay(waktu);
      tam12(33,'k');
      delay(waktu);
      tam12(35,'l');
      delay(waktu);
      tam12(37,'m');
      delay(waktu);
      tam12(39,'n');
      delay(waktu);
      tam12(41,'o');
      delay(waktu);
      tam12(43,'p');
      delay(waktu);
      tam12(45,'q');
      delay(waktu);
      tam12(47,'r');
      delay(waktu);
      tam12(49,'s');
      delay(waktu);
      tam12(51,'t');
      delay(waktu);
      tam12(53,'u');
      delay(waktu);
      tam12(55,'v');
      delay(waktu);
       tam12(57,'w');
      delay(waktu);
       tam12(59,'x');
      delay(waktu);
    if(plus== 61){
  digitalWrite(MASTER_EN , HIGH);  
  delay(1);                          
  RS485Serial.print('y');          
  RS485Serial.flush();               
  digitalWrite(MASTER_EN , LOW);     
  plus=0;hit =0;//padat1  = false;  jalur1p = false;
      //jalur2p = false;//dat  = true;
  }
   delay(waktu);
}
