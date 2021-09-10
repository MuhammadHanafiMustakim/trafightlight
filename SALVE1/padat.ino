
void ppp(){   
      sev =HIGH; 
      while(sev){ 
        digitalWrite(kuning,LOW);
        digitalWrite(merah,LOW);
        digitalWrite(hijau,HIGH);   
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'A'){sev = LOW;}
        }
        sevseg1(0,8); //1
      }
      sev =HIGH;
      hitung('V',0,7); 
      sev =HIGH;
      hitung('W',0,6);
      sev =HIGH;
      hitung('X',0,5);
         sev =HIGH;
      hitung('Y',0,4);
         sev =HIGH;
      hitung('Z',0,3);
         sev =HIGH;
    hitung('a',0,2);
         sev =HIGH;
      hitung('b',0,1);
         sev =HIGH;    
         while(sev){ 
           digitalWrite(hijau,LOW);     
         digitalWrite(kuning,HIGH);
        digitalWrite(merah,LOW); 
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'c'){sev = LOW;}
        }
        sevseg1(0,0);
      }
         sev =HIGH;
      hitung('d',0,0);
         sev =HIGH;
           while(sev){ 
           digitalWrite(hijau,LOW);     
         digitalWrite(kuning,LOW);
        digitalWrite(merah,HIGH); 
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'e'){sev = LOW;}
        }
        sevseg1(2,0); //20
      }
               sev =HIGH;
      hitung('f',1,9);
               sev =HIGH;
      hitung('g',1,8);
               sev =HIGH;
      hitung('h',1,7);
               sev =HIGH;
      hitung('i',1,6);
               sev =HIGH;
      hitung('j',1,5);
               sev =HIGH;
      hitung('k',1,4);
               sev =HIGH;
      hitung('l',1,3);
               sev =HIGH;
      hitung('m',1,2);
               sev =HIGH;
      hitung('n',1,1);
      sev =HIGH;
      hitung('o',1,0);  
      sev =HIGH;
      hitung('p',0,9); 
      sev =HIGH;
      hitung('q',0,8); 
      sev =HIGH;
      hitung('r',0,7); 
      sev =HIGH;
      hitung('s',0,6); 
      sev =HIGH;
      hitung('t',0,5); 
      sev =HIGH;
      hitung('u',0,4); 
      sev =HIGH;
      hitung('v',0,3); 
      sev =HIGH;
      hitung('w',0,2);  
        sev =HIGH;
      hitung('x',0,1);  
       sev =HIGH;
       while(sev){         
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'y'){sev = LOW; hitu=LOW;}
        }
        sevseg1(0,0);
      }
         digitalWrite(digit2,LOW);
        digitalWrite(digit1,LOW);
     digitalWrite(kuning,LOW);
        digitalWrite(merah,LOW);
        digitalWrite(hijau,LOW);  
 }
      
