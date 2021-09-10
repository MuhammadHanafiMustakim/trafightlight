/*
 * MODE JALURNYA
 * LLL
 * PPP    ~
 * 
 * LPP
 * PLP
 * PPL
 * 
 * PLL
 * LPL
 * LLP
*/
void banding() {
terimadata();
//mode padat dan lancar
  if(((jalur1l==true)||(jalur2l==true))&&(jalur3l == true)&&(jalur4l == true)){   // JALUR1
    lancar1 = true;
    }
    else if(((jalur1p == true)||(jalur2p == true))&&(jalur3p == true)&&(jalur4p == true)){ 
        //lancar1 = false;
      padat1 = true;
      }
  //mode ppl PLP LPP
  if((((jalur1p == true)||(jalur1l == true))&&((jalur2p == true)||(jalur2l == true)))&&(jalur3p == true)&&(jalur4l == true)){
    jalurPPL1 = true;
    }else if((((jalur1p == true)||(jalur1l == true))&&((jalur2p == true)||(jalur2l == true)))&&(jalur3l == true)&&(jalur4p == true)){
     jalurPLP1 = true;
      }else if((jalur1l == true)&&(jalur2l == true)&&(jalur3p == true)&&(jalur4p == true)){
        jalurLPP1 = true;
        }
    //mode pll lpl llp
  if((((jalur1p == true)||(jalur1l == true))&&((jalur2p == true)||(jalur2l == true)))&&(jalur3l == true)&&(jalur4l == true)){
    jalurPLL1 = true;
    }else if((jalur1l == true)&&(jalur2l == true)&&(jalur3p == true)&&(jalur4l == true)){
      jalurLPL1 = true;
      }else if((jalur1l == true)&&(jalur2l == true)&&(jalur3l == true)&&(jalur4p == true)){
         jalurLLP1 = true;
        }
}
void terimadata(){
        char ser1 = RS485Serial.read();
  //MODE LANCAR DAN PADAT
    if(ser1 == 'H'){//JALUR1 lancar SALVE1
      jalur1l = true;
      jalur1p = false;
      
      padat1  = false;
     jalurPPL1 = false;
     jalurPLP1 = false;
     jalurLPP1 = false;

     jalurPLL1 =false;
     jalurLPL1 = false;
     jalurLLP1 = false;
      }
      else if(ser1 == 'I'){//JALUR1 padat SALVE1
      jalur1p = true;
      jalur1l = false;
      
      lancar1 = false;
      jalurPPL1 = false;
      jalurPLP1 = false;
      jalurLPP1 = false;

      jalurPLL1 =false;
      jalurLPL1 = false;
      jalurLLP1 = false;
      }
      else if(ser1 == 'J'){  //JALUR2 lancar slave 3
      jalur2l = true;
      jalur2p = false;
       padat1  = false;
      
       jalurPPL1 = false;
       jalurPLP1 = false;
       jalurLPP1 = false;

       jalurPLL1 =false;
       jalurLPL1 = false;
       jalurLLP1 = false;
      }
      else if(ser1 == 'K'){  //JALUR2 padat SALVE 3
      jalur2p = true;
      jalur2l = false;
      lancar1 = false;
      
      jalurPPL1 = false;
      jalurPLP1 = false;
      jalurLPP1 = false;

      jalurPLL1 =false;
      jalurLPL1 = false;
      jalurLLP1 = false;
      }else if(ser1 == 'L'){  //JALUR3 lancar SALVE 4
      jalur3l = true;
      jalur3p = false;
       padat1  = false;
       
       jalurPPL1 = false;
       jalurPLP1 = false;
       jalurLPP1 = false;

       jalurPLL1 =false;
       jalurLPL1 = false;
       jalurLLP1 = false;
      }
      else if(ser1 == 'M'){   //JALUR3 padat SLAVE 4
      lancar1 = false;
      jalur3p = true;
      jalur3l = false;
      
      jalurPPL1 = false;
      jalurPLP1 = false;
       jalurLPP1 = false;

      jalurPLL1 =false;
      jalurLPL1 = false;
      jalurLLP1 = false;
      }
       else if(ser1 == 'N'){  //JALUR4 LANCAR SALVE 2
      jalur4l = true;
      jalur4p = false;
      
       padat1  = false;
      
       jalurPPL1 = false;
       jalurPLP1 = false;
       jalurLPP1 = false;

      jalurPLL1 =false;
      jalurLPL1 = false;
      jalurLLP1 = false;
      }
      else if(ser1 == 'O'){ //JALUR4 PADAT SALVE 2
      lancar1 = false;
      jalur4p = true;
      jalur4l = false;
      
      jalurPPL1 = false;
      jalurPLP1 = false;
       jalurLPP1 = false;

      jalurPLL1 =false;
      jalurLPL1 = false;
      jalurLLP1 = false;
      }
  }
