/*   _____                                 _____                                                                                                                
  __|   _ |__  ______  ______  ____     __| __  |__  ____  ____      ____  __   _  ____   _  ______  ____   _   ______  _____  _____   ____  ____   _  ______   
 \  \  //    ||   ___||   ___||    \   |  |/ /     ||    ||    |    |    ||  | | ||    \ | ||   ___||    \ | | |   ___|/     \|     \ |    ||    \ | ||   ___|  
 |\  \//     ||   ___| `-.`-. |     \  |     \     ||    ||    |_  _|    ||  |_| ||     \| ||   ___||     \| | |   |__ |     ||      \|    ||     \| ||   |  |  
 |_\__/    __||______||______||__|\__\ |__|\__\  __||____||______||______||______||__/\____||______||__/\____| |______|\_____/|______/|____||__/\____||______|  
    |_____|                               |_____|                                                                                                               
                                           _                                                                                                                    
  _____   __   _  ____  ______  __  __    / |  _____   ____  _____    __  __    _                                                                               
 /     \ |  | | ||    ||   ___||  |/ /   / /  |     \ |    ||     | _|  |_\ \  //                                                                               
 |     | |  |_| ||    ||   |__ |     \  |_/   |      \|    ||     \|_    _|\ \//                                                                                
 \___/\_\|______||____||______||__|\__\       |______/|____||__|\__\ |__|  /__/                                                                                 
                                                  _                                                                                                             
   __    _ ______  ______  __  __  _____  _____   / |______  ____  ____   _                                                                                     
  \  \  //|   ___||   ___||  |/ / /     \/     \ / /|   ___||    ||    \ | |                                                                                     
   \  \// |   ___||   ___||     \ |     ||     ||_/ |   ___||    ||     \| |                                                                                     
    \__/  |______||______||__|\__\\_____/\_____/    |___|   |____||__/\____|*/ 

/*----------------------------------------------------------------------+
 |                                                                      |
 |     lottosimufix.c -- demonstrate lotto number simulation            |
 |                       of Eurojackpot                                 |
 |                                                                      |
 +----------------------------------------------------------------------*/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

void main()
{
  int b0[5],bb[5],i,ii,total,game,sw,it;
  long cash,jp,saldo;
  int bt0[2],bbt[2];
  int totalbt,eit,egame;
  int sil; //printout silence mode
  int cup; //cupoung silence mode
  int big; //big saldo annoucements mode 0-10000

  printf("Eurojackpot simulation:\n");
  printf("\nOne fixed row:\n");
  printf("Enter 1-50 nbr#1:");
  scanf("%d",&b0[0]);
  printf("Enter 1-50 nbr#2:");
  scanf("%d",&b0[1]); 
  printf("Enter 1-50 nbr#3:");
  scanf("%d",&b0[2]);
  printf("Enter 1-50 nbr#4:");
  scanf("%d",&b0[3]);
  printf("Enter 1-50 nbr#5:");
  scanf("%d",&b0[4]);
  printf("Enter 1-10 star nbr#1:");
  scanf("%d",&bt0[0]);
  printf("Enter 1-10 star nbr#2:");
  scanf("%d",&bt0[1]);
  printf("Nbr of iterations:");
  scanf("%d",&eit);
  printf("Nbr of games:");
  scanf("%d",&egame);
  printf("Printout silence 0/1:");
  scanf("%d",&sil);
  printf("Cupoung silence 0/1:");
  scanf("%d",&cup);
  printf("Big saldo info 0/nbr:");
  scanf("%d",&big);

  srand(time(0));

  for(it=0;it<eit;it++) //iterations 1-10000
  {
    cash=0;

    for(game=0;game<egame;game++) //game rounds how many weeks 1-3380
    {
      /*sw=0;

      for(i=0;i<5;i++)
      {
        b0[i]=rand() % 50 +1;
        for(ii=0;ii<5;ii++)
        {
          if(b0[ii] == b0[i] && (ii != i)) sw=1;
        }
        if(sw==1){
          i--;
          sw=0;
        }
      }
      sw=0;

      for(i=0;i<2;i++)
      {
        bt0[i]=rand() % 10 +1;
        for(ii=0;ii<2;ii++)
        {
          if(bt0[ii] == bt0[i] && (ii != i)) sw=1;
        }
        if(sw==1){
          i--;
          sw=0;
        }
      }*/

      if(cup != 1) printf("\nRow1:%d+%d+%d+%d+%d*%d+%d",b0[0],b0[1],b0[2],b0[3],b0[4],bt0[0],bt0[1]);
      sw=0;

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

      if(cup != 1) printf("\nWinning row:%d+%d+%d+%d+%d*%d+%d",bb[0],bb[1],bb[2],bb[3],bb[4],bbt[0],bbt[1]);

      jp=rand() % 80000000 + 10000000; //jackpot 10-90 milj. euro
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

      if(cup != 1) printf("\nNumbers correct Row1:%d*%d",total,totalbt);

      if(total==5 && totalbt==2) {
      cash=cash+jp;
      if(sil != 1) printf("\n%ld euro win",jp);
      }
      if(total==5 && totalbt==1) {
      cash=cash+500000;
      if(sil != 1) printf("\n500 000 euro win");
      }
      if(total==5 && totalbt==0) {
      cash=cash+100000;
      if(sil != 1) printf("\n100 000 euro win");
      }
      if(total==4 && totalbt==2) {
      cash=cash+4200;
      if(sil != 1) printf("\n4200 euro win");
      }
      if(total==4 && totalbt==1) {
      cash=cash+240;
      if(sil != 1) printf("\n240 euro win");
      }
      if(total==4 && totalbt==0) {
      cash=cash+100;
      if(sil != 1) printf("\n100 euro win");
      }
      if(total==3 && totalbt==2) {
      cash=cash+60;
      if(sil != 1) printf("\n60 euro win");
      }
      if(total==2 && totalbt==2) {
      cash=cash+20;
      if(sil != 1) printf("\n20 euro win");
      }
      if(total==3 && totalbt==1) {
      cash=cash+18;
      if(sil != 1) printf("\n18 euro win");
      }
      if(total==3 && totalbt==0) {
      cash=cash+15;
      if(sil != 1) printf("\n15 euro win");
      }   
      if(total==1 && totalbt==2) {
      cash=cash+10;
      if(sil != 1) printf("\n10 euro win");
      }
      if(total==2 && totalbt==1) {
      cash=cash+8;
      if(sil != 1) printf("\n8 euro win");
      }

      saldo = cash - game * 2 -2;

      if(sil != 1 && saldo > 100) printf("\nGame,win,100 euro saldo:%d+%ld+%ld",game,cash,saldo);
      if(sil != 1 && saldo > 1000) printf("\nGame,win,1000 euro saldo:%d+%ld+%ld",game,cash,saldo);
      if(sil != 1 && saldo > 10000) printf("\nGame,win,10000 euro saldo:%d+%ld+%ld",game,cash,saldo);
      if(sil != 1 && saldo > 100000) printf("\nGame,win,100000 euro saldo:%d+%ld+%ld",game,cash,saldo);
      if(sil != 1 && saldo > 1000000) printf("\nGame,win,1000000 euro saldo:%d+%ld+%ld",game,cash,saldo);
      if(sil != 1 && saldo > 10000000) printf("\nGame,win,10000000 euro saldo:%d+%ld+%ld",game,cash,saldo);
    }
    if(big == 0) {
      printf("\nIteration,game,win,saldo:");
      printf("\n%d+%d+%ld+%ld",it,game,cash,saldo);
    }
    if(big > 0 && saldo > big) {
      printf("\nIteration,game,win,saldo:");
      printf("\n%d+%d+%ld+%ld",it,game,cash,saldo);
    }
  }
}
