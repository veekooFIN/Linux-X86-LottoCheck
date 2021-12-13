/*----------------------------------------------------------------------+
 |                                                                      |
 |     lotto.c -- demonstrate lotto number simulation / quick and dirty |
 |                Eurojackpot                                           |
 |                                                                      |
 +----------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() 
{ 
  int b0[5],bb[5],i,ii,total,game,cash,sw,saldo,jp,it;
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
  int ir1,ir2,irr1,irr2;
  int sil=0; //printout silence mode
  int cup=0; //cupoung silence mode  

 srand(time(0));
 
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
  
 for(it=0;it<1;it++) //iterations 1-100000
 {
 cash=0;
 ir1=0;
 ir2=0;
 irr1=0;
 irr2=0;
 for(game=0;game<5;game++) //game rounds how many weeks 1-3380   
 {

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input rows                              |
 |                                                                      |
 +----------------------------------------------------------------------*/ 
 
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input row 1                             |
 |                                                                      |
 +----------------------------------------------------------------------*/  
   
  if(cup != 1) printf("\nEurojackpot R1:\t\t\t %d + %d + %d + %d + %d * %d + %d\n",b0[0],b0[1],b0[2],b0[3],b0[4],bt0[0],bt0[1]);
   
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - input right row                         |
 |                                                                      |
 +----------------------------------------------------------------------*/  
  sw=0;
  //printf("\nSyota oikeat eurojackpot numerot 5kpl 1-50: "); 
  for(i=0;i<5;i++) 
  { 
    bb[i]=rand() % 50 +1;
    for(ii=0;ii<5;ii++) 
    {     
      if(bb[ii] == bb[i] && (ii != i)) sw=1;
    }
    if(sw==1){ 
    i--;
    sw=0;
    }
  }
  sw=0;
  //printf("\nSyota oikeat eurojackpot tahtinumerot 2kpl 1-10: ");
  for(i=0;i<2;i++) 
  {
    bbt[i]=rand() % 10 +1;
    for(ii=0;ii<2;ii++) 
    {  
      if(bbt[ii] == bbt[i] && (ii != i)) sw=1;
    }
    if(sw==1){ 
    i--;
    sw=0;
    }
  }
  
  if(cup != 1) printf("\nEurojackpot oikea rivi:\t\t\t %d + %d + %d + %d + %d * %d + %d\n",bb[0],bb[1],bb[2],bb[3],bb[4],bbt[0],bbt[1]);

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - output results                          |
 |                                                                      |
 +----------------------------------------------------------------------*/

  jp=rand() % 80000000 + 10000000; //jackpot 10-90 milj. euro

/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - output row 1                            |
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
      
  if(cup != 1) printf("\nEurojackpot numeroita oikein R1:\t\t\t %d * %d\n",total,totalbt);
  if(total==5 && totalbt==2) {
    cash=cash+jp;
    if(sil != 1) printf("\nEurojackpot\t\t\t %d euron voitto\n",jp);
     }
  if(total==5 && totalbt==1) {
    cash=cash+500000;
    if(sil != 1) printf("\nEurojackpot 500 000 euron voitto\n");
  }
  if(total==5 && totalbt==0) {
    cash=cash+100000;
    if(sil != 1) printf("\nEurojackpot 100 000 euron voitto\n");
  }
  if(total==4 && totalbt==2) {
    cash=cash+4200;
    if(sil != 1) printf("\nEurojackpot 4200 euron voitto\n");
  }
  if(total==4 && totalbt==1) {
    cash=cash+240;
    if(sil != 1) printf("\nEurojackpot 240 euron voitto\n");
  }
  if(total==4 && totalbt==0) {
    cash=cash+100;
    if(sil != 1) printf("\nEurojackpot 100 euron voitto\n");
  }
  if(total==3 && totalbt==2) {
    cash=cash+60;
    if(sil != 1) printf("\nEurojackpot 60 euron voitto\n");
  }
  if(total==2 && totalbt==2) {
    cash=cash+20;
    if(sil != 1) printf("\nEurojackpot 20 euron voitto\n");
  }
  if(total==3 && totalbt==1) {
    cash=cash+18;
    if(sil != 1) printf("\nEurojackpot 18 euron voitto\n");
  }
  if(total==1 && totalbt==2) {
    cash=cash+10;
    if(sil != 1) printf("\nEurojackpot 10 euron voitto\n");
  }
  if(total==2 && totalbt==1) {
    cash=cash+8;
    if(sil != 1) printf("\nEurojackpot 8 euron voitto\n");
  }
  
/*----------------------------------------------------------------------+
 |                                                                      |
 |                                                                      |
 |                Eurojackpot - reports                                 |
 |                                                                      |
 +----------------------------------------------------------------------*/
 
  saldo = cash - game * 2 -2;

  if(sil != 1 && saldo > 1) printf("\nEurojackpot kierros, voitot, 1 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 10) printf("\nEurojackpot kierros, voitot, 10 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 100) printf("\nEurojackpot kierros, voitot, 100 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 1000) printf("\nEurojackpot kierros, voitot, 1 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 10000) printf("\nEurojackpot kierros, voitot, 10 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 100000) printf("\nEurojackpot kierros, voitot, 100 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 1000000) printf("\nEurojackpot kierros, voitot, 1 000 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 10000000) printf("\nEurojackpot kierros, voitot, 10 000 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  if(sil != 1 && saldo > 100000000) printf("\nEurojackpot kierros, voitot, 100 000 000 euron tulos:\t\t\t %d+%d+%d\n",game,cash,saldo);
  }
 
  //if(saldo > 10000) 
  printf("\nEurojackpot iteraatio, kierros, voitot, tulos:\t\t\t %d + %d + %d + %d\n",it,game,cash,saldo);
}
}  


