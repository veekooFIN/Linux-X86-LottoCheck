/*----------------------------------------------------------------------+
 |                                                                      |
 |     lotto.c -- demonstrate lotto number checker / quick and dirty    |
 |                Vikinglotto, Eurojackpot and Lotto                    |
 |                                                                      |
 +----------------------------------------------------------------------*/

#include<stdio.h> 
void main() 
{ 
  int a0[7],b0[5],c0[6],aa[7],bb[5],cc[6],i,ii,total;
  int a1[7],b1[5],c1[6];
  int a2[7],b2[5],c2[6];
  int a3[7],b3[5],c3[6];
  int a4[7],b4[5],c4[6];
  int a5[7],b5[5],c5[6];
  int a6[7],b6[5],c6[6];
  int a7[7],b7[5],c7[6];
  int a8[7],b8[5],c8[6];
  int a9[7],b9[5],c9[6];
  int cv0[0],cp0[0],ccv[0],ccp[0],totalcv,totalcp;
  int cv1[0],cp1[0];
  int cv2[0],cp2[0];
  int cv3[0],cp3[0];
  int cv4[0],cp4[0];
  int cv5[0],cp5[0];
  int cv6[0],cp6[0];
  int cv7[0],cp7[0];
  int cv8[0],cp8[0];
  int cv9[0],cp9[0];
  int bt0[2],bbt[2];
  int bt1[2],totalbt;
  int bt2[2];
  int bt3[2];
  int bt4[2];
  int bt5[2];
  int bt6[2];
  int bt7[2];
  int bt8[2];
  int bt9[2];
  int ap0[0],aal[0],aap[0],totalal,totalap;
  int ap1[0];
  int ap2[0];
  int ap3[0];
  int ap4[0];
  int ap5[0];
  int ap6[0];
  int ap7[0];
  int ap8[0];
  int ap9[0];
  
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Vikinglotto - input rows                              |
 |                                                                      |
 +----------------------------------------------------------------------*/
                         
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R1: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c0[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R1: ");  
  scanf("%d",&cv0[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R1: ");  
  scanf("%d",&cp0[0]);
    
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R2: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c1[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R2: ");  
  scanf("%d",&cv1[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R2: ");  
  scanf("%d",&cp1[0]);
/*
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R3: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c2[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R3: ");  
  scanf("%d",&cv2[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R3: ");  
  scanf("%d",&cp2[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R4: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c3[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R4: ");  
  scanf("%d",&cv3[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R4: ");  
  scanf("%d",&cp3[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R5: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c4[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R5: ");  
  scanf("%d",&cv4[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R5: ");  
  scanf("%d",&cp4[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R6: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c5[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R6: ");  
  scanf("%d",&cv5[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R6: ");  
  scanf("%d",&cp5[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R7: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c6[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R7: ");  
  scanf("%d",&cv6[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R7: ");  
  scanf("%d",&cp6[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R8: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c7[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R8: ");  
  scanf("%d",&cv7[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R8: ");  
  scanf("%d",&cp7[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R9: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c8[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R9: ");  
  scanf("%d",&cv8[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R9: ");  
  scanf("%d",&cp8[0]);
  
  printf("\nSyota vikinglotto numerot 6kpl 1-48 R10: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&c9[i]); 
  }
  printf("\nSyota vikinglotto vikingnumero 1kpl 1-5 R10: ");  
  scanf("%d",&cv9[0]);
  printf("\nSyota vikinglotto plusnumero 1kpl 1-30 R10: ");  
  scanf("%d",&cp9[0]);
*/
  
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Vikinglotto - input right row                         |
 |                                                                      |
 +----------------------------------------------------------------------*/
  
  printf("\nSyota oikeat vikinglotto numerot 6kpl 1-48: "); 
  for(i=0;i<6;i++) 
  { 
    scanf("%d",&cc[i]); 
  }
  printf("\nSyota oikeat vikinglotto vikingnumero 1kpl 1-5: ");  
  scanf("%d",&ccv[0]);
  printf("\nSyota oikeat vikinglotto plusnumero 1kpl 1-30: ");  
  scanf("%d",&ccp[0]); 
   
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input rows                              |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  
  printf("\nSyota eurojackpot numerot 5kpl 1-50 R1: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b0[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R1: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt0[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R2: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b1[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R2: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt1[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R3: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b2[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R3: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt2[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R4: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b3[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R4: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt3[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R5: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b4[i]); 
  }
    printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R5: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt4[i]);
  } 
/*
  printf("\nSyota eurojackpot numerot 5kpl 1-50 R6: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b5[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R6: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt5[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R7: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b6[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R7: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt6[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R8: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b7[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R8: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt7[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R9: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b8[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R9: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt8[i]);
  } 

  printf("\nSyota eurojackpot numerot 5kpl 1-50 R10: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&b9[i]); 
  }
  printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R10: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bt9[i]);
  } 
*/
 
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input right row                         |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  
  printf("\nSyota oikeat eurojackpot numerot 5kpl 1-50: "); 
  for(i=0;i<5;i++) 
  { 
    scanf("%d",&bb[i]); 
  }
  printf("\nSyota oikeat eurojackpot tahtinumerot 2kpl 1-10: "); 
  for(i=0;i<2;i++) 
  { 
    scanf("%d",&bbt[i]); 
  }

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Lotto - input rows                                    |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  
  printf("\nSyota lotto numerot 7kpl 1-40 R1: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a0[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R1: ");  
  scanf("%d",&ap0[0]);
  
  printf("\nSyota lotto numerot 7kpl 1-40 R2: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a1[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R2: ");  
  scanf("%d",&ap1[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R3: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a2[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R3: ");  
  scanf("%d",&ap2[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R4: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a3[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R4: ");  
  scanf("%d",&ap3[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R5: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a4[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R5: ");  
  scanf("%d",&ap4[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R6: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a5[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R6: ");  
  scanf("%d",&ap5[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R7: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a6[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R7: ");  
  scanf("%d",&ap6[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R8: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a7[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R8: ");  
  scanf("%d",&ap7[0]);
/*
  printf("\nSyota lotto numerot 7kpl 1-40 R9: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a8[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R9: ");  
  scanf("%d",&ap8[0]);

  printf("\nSyota lotto numerot 7kpl 1-40 R10: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&a9[i]); 
  }
  printf("\nSyota lotto plusnumero 1kpl 1-30 R10: ");  
  scanf("%d",&ap9[0]);
*/

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Lotto - input right row                               |
 |                                                                      |
 +----------------------------------------------------------------------*/  
 
  printf("\nSyota oikeat lotto numerot 7kpl 1-40: "); 
  for(i=0;i<7;i++) 
  { 
    scanf("%d",&aa[i]); 
  }
  printf("\nSyota oikeat lotto lisanumero 1kpl 1-40 R10: ");  
  scanf("%d",&aal[0]);
  printf("\nSyota oikeat lotto plusnumero 1kpl 1-30 R10: ");  
  scanf("%d",&aap[0]);

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Vikinglotto - output results                          |
 |                                                                      |
 +----------------------------------------------------------------------*/
   
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c0[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0;
  if(ccv[0]==cv0[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp0[0])
  { 
    totalcp++;
  }
  printf("\nVikinglotto numeroita oikein R1:\t\t\t %d V %d P %d\n",total,totalcv,totalcp);

  total=0;  
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c1[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv1[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp1[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R2:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
/*  
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c2[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv2[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp2[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R3:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c3[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv3[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp3[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R4:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c4[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv4[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp4[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R5:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c5[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv5[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp5[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R6:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c6[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv6[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp6[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R7:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c7[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv7[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp7[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R8:\t\t\t %d V %d P %d\n",total,totalcv,totalcp); 
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c8[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv8[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp8[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R9:\t\t\t %d V %d P %d\n",total,totalcv,totalcp);  
  total=0; 
  for(i=0;i<6;i++) 
  { 
    for(ii=0;ii<6;ii++) 
    { 
      if(cc[i]==c9[ii])
      { 
        total++;
      }
    }  
  }
  totalcv=0; 
  if(ccv[0]==cv9[0])
  { 
    totalcv++;
  }
  totalcp=0; 
  if(ccp[0]==cp9[0])
  { 
    totalcp++;
  } 
  printf("\nVikinglotto numeroita oikein R10:\t\t\t %d V %d P %d\n",total,totalcv,totalcp);    
*/

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - output results                          |
 |                                                                      |
 +----------------------------------------------------------------------*/

  total=0;  
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b0[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt0[ii])
      { 
        totalbt++;
      }
    }  
  }    
  printf("\nEurojackpot numeroita oikein R1:\t\t\t %d * %d\n",total,totalbt); 

  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b1[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt1[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R2:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b2[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt2[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R3:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b3[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt3[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R4:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b4[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt4[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R5:\t\t\t %d * %d\n",total,totalbt); 
/*
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b5[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt5[ii])
      { 
        totalbt++;
      }
    }  
  }     
  printf("\nEurojackpot numeroita oikein R6:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b6[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt6[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R7:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b7[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt7[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R8:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b8[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt8[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R9:\t\t\t %d * %d\n",total,totalbt); 
  total=0; 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    { 
      if(bb[i]==b9[ii])
      { 
        total++;
      }
    }  
  }
  totalbt=0;
  for(i=0;i<2;i++) 
  { 
    for(ii=0;ii<2;ii++) 
    { 
      if(bbt[i]==bt9[ii])
      { 
        totalbt++;
      }
    }  
  }       
  printf("\nEurojackpot numeroita oikein R10:\t\t\t %d * %d\n",total,totalbt); 
*/

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Lotto - output results                                |
 |                                                                      |
 +----------------------------------------------------------------------*/
 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a0[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a0[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap0[0])
  { 
    totalap++;
  }  
  printf("\nLotto numeroita oikein R1:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a1[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a1[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap1[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R2:\t\t\t %d + %d P %d\n",total,totalal,totalap);
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a2[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a2[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap2[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R3:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a3[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a3[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap3[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R4:\t\t\t %d + %d P %d\n",total,totalal,totalap);
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a4[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a4[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap4[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R5:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a5[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a5[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap5[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R6:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a6[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a6[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap6[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R7:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a7[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a7[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap7[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R8:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
/*  
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a8[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a8[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap8[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R9:\t\t\t %d + %d P %d\n",total,totalal,totalap); 
  total=0; 
  for(i=0;i<7;i++) 
  { 
    for(ii=0;ii<7;ii++) 
    { 
      if(aa[i]==a9[ii])
      { 
        total++;
      }
    }  
  }
  totalal=0;
  for(i=0;i<7;i++) 
  { 
    if(aal[0]==a9[i])
    { 
      totalal++;
    }
  }
  totalap=0; 
  if(aap[0]==ap9[0])
  { 
    totalap++;
  }   
  printf("\nLotto numeroita oikein R10:\t\t\t %d + %d P %d\n",total,totalal,totalap);
*/  
} 


