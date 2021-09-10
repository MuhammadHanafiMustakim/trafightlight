#include <SoftwareSerial.h>
#define SSerialRX 2 //pin serial rx
#define SSerialTX 3 //pin serial tx

//#define SSerialTxControl 8 //RS485 kontrol


#define RS485Transmit HIGH
#define RS485Receive LOW

const int ENTER=21;
/*-----( pendeklarasian objects )-----*/
SoftwareSerial RS485Serial(SSerialRX, SSerialTX); // RX, TX

/*-----( pendeklarasian Variables )-----*/
int byteReceived;
int byteReceivedSerial;
int byteSend;
 bool led = HIGH;
 int waktu = 100;
 int hit =1;
#define MASTER_EN   31   // connected to RS485 Enable pin
 int plus=0;

 ///PARAMETER mode

bool lancar1 = false;
bool padat1  = false;
bool dat  = true;

bool PLL = false;
bool LPL = false;
bool LLP = false;
bool LPP = false;
bool PLP = false;
bool PPL = false;

//MODE LANCAR DAN PADAT
bool jalur1p = false;
bool jalur1l= false;
bool jalur2p= false;
bool jalur2l= false;
bool jalur3p= false;
bool jalur3l= false;
bool jalur4p= false;
bool jalur4l= false;

//JALUR YANG PADAT HIJAU 12 DETIK 
//MODE PLL
bool jalurPPL1 = false;  
bool jalurPLP1 = false;
bool jalurLPP1 = false;  

bool jalurPLL1 = false;
bool jalurLPL1 = false;  
bool jalurLLP1 = false;


void setup() {
  pinMode(ENTER, INPUT);
  pinMode(MASTER_EN , OUTPUT);      // pin untuk 
  RS485Serial.begin(9600);               // kecepatan transfer data 
  Serial.begin(9600);
  digitalWrite(MASTER_EN , LOW);    // Enable pin low
    pinMode(9,OUTPUT);                                 
}

void loop() {
   int button = digitalRead(ENTER);
   banding();
 if((button==HIGH)&&(led==LOW)){

  if(lancar1==true){                 //lancar
      digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('z');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
   while(hit==1){
      plus++;
    kontrol();
    }plus=0;
  } else if(padat1==true){             //padat
          digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('y');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    kontrol1();
    //rtcku();
    }plus=0;
    //lancar1 = false;
    }else if(jalurPLL1==true){                 //PLL
          digitalWrite(MASTER_EN , HIGH);  //HIJAU 12 DETIK   
  delay(1);
  RS485Serial.print('B');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }else if(jalurLPL1==true){                 //LPL
          digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('C');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }else if(jalurLLP1==true){                 //LLP
          digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('D');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }

    else if(jalurLPP1==true){                 //LPP
          digitalWrite(MASTER_EN , HIGH);    //hijau 10 detik 
  delay(1);
  RS485Serial.print('E');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }else if(jalurPLP1==true){                 //PLP
          digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('F');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }else if(jalurPPL1==true){                 //PPL
          digitalWrite(MASTER_EN , HIGH);     
  delay(1);
  RS485Serial.print('G');
  digitalWrite(MASTER_EN , LOW);     
  delay(1); 
     while(hit==1){
   plus++;
    padatjL1();
    }plus=0;
    //lancar1 = false;
    }
     led = HIGH; 
  }else if((button==LOW)&&(led==HIGH)){
    hit=1;
    led = LOW;
   
    } 
}
