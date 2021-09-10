void LLP(){   
      sev =HIGH; 
      while(sev){ 
        digitalWrite(kuning,LOW);
        digitalWrite(hijau,LOW);
        digitalWrite(merah,HIGH);   
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'A'){sev = LOW;}
        }
        sevseg1(1,5); //1
      }
      sev =HIGH;
      hitung('V',1,4); 
      sev =HIGH;
      hitung('W',1,3);
      sev =HIGH;
      hitung('X',1,2);
         sev =HIGH;
      hitung('Y',1,1);
         sev =HIGH;
      hitung('Z',1,0);
         sev =HIGH;
      hitung('a',0,9);    
         sev =HIGH;
      hitung('b',0,8);
         sev =HIGH;    
        hitung('c',0,7); 
         sev =HIGH;
      hitung('d',0,6);
         sev =HIGH;
       hitung('e',0,5);
               sev =HIGH;
      hitung('f',0,4);
               sev =HIGH;
         hitung('g',0,3);
               sev =HIGH;
      hitung('h',0,2);
               sev =HIGH;
      hitung('i',0,1); 
               sev =HIGH;
      hitung('j',0,0);
               sev =HIGH;
          while(sev){ 
        digitalWrite(kuning,LOW);
        digitalWrite(merah,LOW);
        digitalWrite(hijau,HIGH);   
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'k'){sev = LOW;}
        }
        sevseg1(1,2); //1
      }
               sev =HIGH;
      hitung('l',1,1);
               sev =HIGH;
      hitung('m',1,0);
               sev =HIGH;
      hitung('n',0,9);    
      sev =HIGH;
      hitung('o',0,8);
      sev =HIGH;
      hitung('p',0,7); 
      sev =HIGH;
       hitung('q',0,6); 
      sev =HIGH;
      hitung('r',0,5); 
      sev =HIGH;
      hitung('s',0,4); 
      sev =HIGH;
      hitung('t',0,3); 
      sev =HIGH;
      hitung('u',0,2); 
      sev =HIGH;
      hitung('v',0,1); 
      sev =HIGH;
           while(sev){ 
           digitalWrite(hijau,LOW);     
         digitalWrite(kuning,HIGH);
        digitalWrite(merah,LOW); 
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'w'){sev = LOW;}
        }
        sevseg1(0,0); 
      }  
        sev =HIGH;
      hitung('x',0,0);  
       sev =HIGH;
       while(sev){  
          digitalWrite(hijau,LOW);     
         digitalWrite(kuning,LOW);
        digitalWrite(merah,HIGH);       
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == 'y'){sev = LOW; hitu=LOW;}
        }
        sevseg1(1,6);
      }
         digitalWrite(digit2,LOW);
        digitalWrite(digit1,LOW);
     digitalWrite(kuning,LOW);
        digitalWrite(merah,LOW);
        digitalWrite(hijau,LOW);  
 }
