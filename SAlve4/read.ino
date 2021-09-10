
void tombolupdown(){
    int tom = digitalRead(tombol); 
   int tom1 = digitalRead(tombold); 
  
  if((tom==HIGH)&&(led==LOW)){
      tambah++;
       if(tambah == 7){
      tambah = 7;
      tambah--;
      }
      kondis(tambah);
     ubahnomor1(tambah);     
     led = HIGH; 
  }else if((tom==LOW)&&(led==HIGH)){
    led = LOW;
    ubahnomor1(tambah);
    }
if((tom1==HIGH)&&(led1==LOW)){
     tambah--;
       if(tambah == -1){
     // tambah = -1;
      tambah++;
      }
      kondis(tambah);
    ubahnomor1(tambah);     
     led1 = HIGH;
  }else if((tom1==LOW)&&(led1==HIGH)){
    led1 = LOW; 
    }
    //kondis(tambah);     
}
void kondis(int tak){
  if((tak>0)&&(tak<=4)){
        
        while(tam){
        digitalWrite(SLAVE_EN , HIGH);     
        delay(1);
        RS485Serial.print('L');
        digitalWrite(SLAVE_EN , LOW);     
        delay(1); 
        tam = false;
        tam1 = true;
        delay(100);
        } tam = true;
      }else if((tak>4)&&(tak<7)){
         while(tam1){
        digitalWrite(SLAVE_EN , HIGH);     
        delay(1);
        RS485Serial.print('M');
        digitalWrite(SLAVE_EN , LOW);     
        delay(1);  
        tam1 = false;
        tam = true;
        } 
         tam1 = true;} 
  }
void hitung(char ang,int digit11, int digit22){
    while(sev){ 
      while(RS485Serial.available()>0){
        char ser1 = RS485Serial.read();
        if(ser1 == ang){sev = LOW;}
        }
        sevseg1(digit11,digit22);
      }
      hit=HIGH;
  }
