#include <SoftwareSerial.h>
//untuk com anode

//pendeklarasian pin untuk 7segment 
const int A = 21; // Pin Segment A
const int B = 20; // Pin Segment B
const int C = 19; // Pin Segment C
const int D = 18; // Pin Segment D
const int E = 17; // Pin Segment E
const int F = 16; // Pin Segment F
const int G = 15; // Pin Segment G
const int H = 14;

const int A_1 = 22; // Pin Segment A
const int B_1 = 23; // Pin Segment B
const int C_1 = 24; // Pin Segment C
const int D_1 = 25; // Pin Segment D
const int E_1 = 26; // Pin Segment E
const int F_1 = 27; // Pin Segment F
const int G_1 = 28; // Pin Segment G
const int H_1 = 29;
const int segs[8] = { 29,28,27,26,25,24,23,22};

const int digit1 = 4;
const int digit2 = 5;
//pin untuk komunikasi serial              
#define SSerialRX        2  //Serial Receive pin
#define SSerialTX        3  //Serial Transmit pin

/*-----( Declare objects )-----*/
SoftwareSerial RS485Serial(SSerialRX, SSerialTX); // RX, TX

/*-----( Declare Variables )-----*/
#define SLAVE_EN  31
//lampu
const int merah = 6;
const int kuning = 7;
const int hijau = 10;
const int tombol = 30;
const int tombold = 8;
//kondisi
bool led = HIGH;
bool led1 = HIGH;
int tambah=0;
bool sev = LOW;

bool tam = true;
bool tam1 = true;
char ser21;
bool hit = HIGH;
char ser12;
bool hitu = HIGH;

void setup(){
   //PIN OUT 7SEGMENT 2 DIGIT COMMON ANODE
    pinMode (A,OUTPUT);
  pinMode (B,OUTPUT);
  pinMode (C,OUTPUT);
  pinMode (D,OUTPUT);
  pinMode (E,OUTPUT);
  pinMode (F,OUTPUT);
  pinMode (G,OUTPUT);
  pinMode (H,OUTPUT);
  pinMode(digit1, OUTPUT);
  pinMode(digit2, OUTPUT);
  
 //UNTUK PULL UP INTERNAL
 for(int i = 21; i>=14; i--){
  digitalWrite(i, HIGH);
  }
 //PIN OUT 7SEGMENT 1 DIGIT COMMON ANODE
  pinMode(A_1, OUTPUT);
  pinMode(B_1, OUTPUT);
  pinMode(C_1, OUTPUT);
  pinMode(D_1, OUTPUT);
  pinMode(E_1, OUTPUT);
  pinMode(F_1, OUTPUT);
  pinMode(G_1, OUTPUT);

 for(int i = 0; i<=8; i++){
  digitalWrite(segs[i], HIGH);
  }

  pinMode(tombol, INPUT);
  pinMode(tombold, INPUT);
  pinMode(merah , OUTPUT); 
  pinMode(kuning , OUTPUT);
  pinMode(hijau , OUTPUT);
  pinMode(SLAVE_EN , OUTPUT);                   // Declare Enable pin as output
  Serial.begin(9600);    // set serial communication baudrate 
  RS485Serial.begin(9600);
  digitalWrite(SLAVE_EN , LOW);                 // Make Enable pin low
                                                // Receiving mode ON 
} 

void loop(){    
  tombolupdown();
char   ser12 = RS485Serial.read();
  if(ser12 == 'z'){
   lancar();
    }
    else if(ser12 == 'y') {
      ppp();
      }  
        //MODE1
    if(ser12 == 'B'){ //PLL
      PLL();
     }else if(ser12 == 'C') { //LPL
      LPL();
       }else if(ser12 == 'D') {  //LLP
      LLP();
      }     
      //MODE2                  
         if(ser12 == 'E'){ //LPP
     LPP();
     }else if(ser12 == 'F') { //PLP
      PLP();
       }else if(ser12 == 'G') {  //PPL
      PPL();
      }                         
 }
