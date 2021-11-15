/*----------------------------------------------------------------------+
 |                                                                      |
 |     lotto.c -- demonstrate lotto number simulation / quick and dirty |
 |                Eurojackpot                                           |
 |                                                                      |
 +----------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
  int b0[5],bb[5],i,ii,total,game,cash,tmp,saldo;
  int b1[5];
  int b2[5];
  int b3[5];
  int b4[5];
  int b5[5];
  int b6[5];
  int b7[5];
  int b8[5];
  int b9[5];
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

 
 cash=0;
 for(game=0;game<52000000;game++)    
 {

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input rows                              |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  
  //printf("\nSyota eurojackpot numerot 5kpl 1-50 R1: "); 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    {
      tmp=rand() % 51 +1;   
      if(b0[i-ii] != tmp && i-ii>0) b0[i]=tmp;  
    }
  }
  //printf("\nSyota eurojackpot tahtinumerot 2kpl 1-10 R1: "); 
  for(i=0;i<2;i++) 
  {
    for(ii=0;ii<2;ii++) 
    {
      tmp=rand() % 11 +1;
      if(bt0[i-ii] != tmp && i-ii>0) bt0[i]=tmp; 
    }
  } 
   
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input right row                         |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  
  //printf("\nSyota oikeat eurojackpot numerot 5kpl 1-50: "); 
  for(i=0;i<5;i++) 
  { 
    for(ii=0;ii<5;ii++) 
    {
      tmp=rand() % 51 +1;   
      if(bb[i-ii] != tmp && i-ii>0) bb[i]=tmp;  
    }
  }
  //printf("\nSyota oikeat eurojackpot tahtinumerot 2kpl 1-10: ");
  for(i=0;i<2;i++) 
  {
    for(ii=0;ii<2;ii++) 
    {
      tmp=rand() % 11 +1;
      if(bbt[i-ii] != tmp && i-ii>0) bbt[i]=tmp; 
    }
  } 

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
  //printf("\nEurojackpot numeroita oikein R1:\t\t\t %d+%d\n",total,totalbt);
  if(total==5 && totalbt==2) cash=cash+20000000;
  if(total==5 && totalbt==1) cash=cash+500000;
  if(total==5 && totalbt==0) cash=cash+100000;
  if(total==4 && totalbt==2) cash=cash+4200;
  if(total==4 && totalbt==1) cash=cash+240;
  if(total==4 && totalbt==0) cash=cash+100;
  if(total==3 && totalbt==2) cash=cash+60;
  if(total==2 && totalbt==2) cash=cash+20;
  if(total==3 && totalbt==1) cash=cash+18;
  if(total==1 && totalbt==2) cash=cash+10;
  if(total==2 && totalbt==1) cash=cash+8;
  saldo = cash - game * 2;
  if(saldo > 1) printf("\nEurojackpot kierros, voitot, 1 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 10) printf("\nEurojackpot kierros, voitot, 10 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 100) printf("\nEurojackpot kierros, voitot, 100 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 1000) printf("\nEurojackpot kierros, voitot, 1 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 10000) printf("\nEurojackpot kierros, voitot, 10 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 100000) printf("\nEurojackpot kierros, voitot, 100 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 1000000) printf("\nEurojackpot kierros, voitot, 1000 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 10000000) printf("\nEurojackpot kierros, voitot, 10 000 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(saldo > 100000000) printf("\nEurojackpot kierros, voitot, 100 000 000 tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  //printf("\nEurojackpot kierros, voitot, tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  }
  printf("\nEurojackpot kierros, voitot, tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
} 


