void sevseg1(int angka,int angka1){
   digitalWrite(digit2, LOW);
   delay(1);
   digitalWrite(digit1, HIGH);
   ubahnomor(angka);
   delay(1);
   digitalWrite(digit1, LOW);
   delay(1);
   digitalWrite(digit2, HIGH);
   ubahnomor(angka1);
   delay(1);
    } 
void ubahnomor (int tekantombol)
{
  switch (tekantombol)
  {
    
 case 0:                //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 0
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,0);
 digitalWrite ( F,0);
 digitalWrite ( G,1);
 break;

 case 1:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 1
 digitalWrite ( A,1);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,1);
 digitalWrite ( E,1);
 digitalWrite ( F,1);
 digitalWrite ( G,1);
 break;

 case 2:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 2
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,1);
 digitalWrite ( D,0);
 digitalWrite ( E,0);
 digitalWrite ( F,1);
 digitalWrite ( G,0);
 break;

case 3:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 3
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,1);
 digitalWrite ( F,1);
 digitalWrite ( G,0);
 break;

 case 4:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 4
 digitalWrite ( A,1);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,1);
 digitalWrite ( E,1);
 digitalWrite ( F,0);
 digitalWrite ( G,0);
 break;

 case 5:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 5
 digitalWrite ( A,0);
 digitalWrite ( B,1);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,1);
 digitalWrite ( F,0);
 digitalWrite ( G,0);
 break;

 case 6:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 6
 digitalWrite ( A,0);
 digitalWrite ( B,1);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,0);
 digitalWrite ( F,0);
 digitalWrite ( G,0);
 break;

 case 7:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 7
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,1);
 digitalWrite ( E,1);
 digitalWrite ( F,1);
 digitalWrite ( G,1);
 break;

 case 8:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 8
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,0);
 digitalWrite ( F,0);
 digitalWrite ( G,0);
 break;

 case 9:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 9
 digitalWrite ( A,0);
 digitalWrite ( B,0);
 digitalWrite ( C,0);
 digitalWrite ( D,0);
 digitalWrite ( E,1);
 digitalWrite ( F,0);
 digitalWrite ( G,0);
 break;
  }
}
void ubahnomor1 (int tekan)
{
  switch (tekan)
  {
    
 case 0:                //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 0
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,0);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,1);
 break;

 case 1:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 1
 digitalWrite ( A_1,1);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,1);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,1);
 digitalWrite ( G_1,1);
 break;

 case 2:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 2
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,1);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,0);
 digitalWrite ( F_1,1);
 digitalWrite ( G_1,0);
 break;

case 3:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 3
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,1);
 digitalWrite ( G_1,0);
 break;

 case 4:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 4
 digitalWrite ( A_1,1);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,1);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,0);
 break;

 case 5:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 5
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,1);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,0);
 break;

 case 6:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 6
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,1);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,0);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,0);
 break;

 case 7:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 7
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,1);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,1);
 digitalWrite ( G_1,1);
 break;

 case 8:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 8
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,0);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,0);
 break;

 case 9:               //Ketika tombol mulai ditekan maka,
 // Tampilkan angka 9
 digitalWrite ( A_1,0);
 digitalWrite ( B_1,0);
 digitalWrite ( C_1,0);
 digitalWrite ( D_1,0);
 digitalWrite ( E_1,1);
 digitalWrite ( F_1,0);
 digitalWrite ( G_1,0);
 break;
  }
}
