#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void menu(void);
 void kurallar(void);
 void normal(void);
 void limitlimenu(void);
 void limitli(int j);
 
 int main(){
     int menusecenek,limitlisecenek;   
     while(menusecenek!=4){
          
          menu();
          scanf("%d",&menusecenek);
          
          switch(menusecenek){
                 
                 case 1:
                      kurallar();
                      system("pause");
                      break;             
                 case 2:
                      normal();
                      system("pause");
                      break;
                 case 3:
                      limitlimenu();
                      scanf("%d",&limitlisecenek);
                      if(limitlisecenek==1)
                         limitli(8);
                      if(limitlisecenek==2)
                         limitli(11);
                      if(limitlisecenek==3)
                         limitli(16);
                       system("pause");
                       break;
                  case 4:
                       printf("\nOyun sonlandiriliyor...");
                       printf("\nOyun Yapimcisi: Ozan Arkan Can\n\n");
                       system("pause");
                       break;
                  default:
                       printf("\nGecersiz secim girdiniz.Lutfen tekrar deneyiniz.\n");
                       break;
                            }
                              }
                              
           return 0;
     }
     
     void menu(void){
          printf("\n1) Oyun kurallari");
          printf("\n2) Sinirsiz sayida tahmin girebildiginiz tek kisilik oyun");
          printf("\n3) Limitli sayida tahmin girebildiginiz tek kisilik oyun");
          printf("\n4) Cikis\n");
          printf("\nLutfen seciminizi giriniz: ");
                    }
     void kurallar(void){
          printf("\n1) Tutulan sayi 4 basamaklidir");
          printf("\n2) Tutulan sayinin her bir basamagi birbirinden farklidir");
          printf("\n3) Tutulan sayinin en sol basamagi sifir olamaz");
          printf("\n4) Tahmin olarak verilen sayidaki herhangi bir rakam tutulan sayida da varsa ve yeri dogruysa +1 , yeri yanlissa -1 verilir\n\n");
                       }
     void limitlimenu(void){
          printf("\n1) Zor   (7 Tahmin hakli)");
          printf("\n2) Orta  (10 Tahmin hakli)");
          printf("\n3) Kolay (15 Tahmin hakli)");
          printf("\n\nLutfen seciminizi giriniz: ");
                           }
     void normal(void){
          srand(time(NULL));
          int i=1,arti,eksi,dizi[4],dizitahmin[4];
     printf("\n\n*** Let the game begin ***\n");
     x: 
     dizitahmin[0] = rand()%9 +1;
     
     dizitahmin[1] = rand()%10;
     
     dizitahmin[2] = rand()%10;
     
     dizitahmin[3] = rand()%10;
     
       if((dizitahmin[0]!=dizitahmin[1]) && (dizitahmin[1]!=dizitahmin[2]) && (dizitahmin[2]!=dizitahmin[3]) && (dizitahmin[0]!=dizitahmin[2]) && (dizitahmin[0]!=dizitahmin[3]) && (dizitahmin[1]!=dizitahmin[3]))
       {}
      else{
           goto x;}
     
     y: 
     arti=0;
     eksi=0;
     printf("\nTahmininizi giriniz:");      
     scanf("%1d%1d%1d%1d",&dizi[0],&dizi[1],&dizi[2],&dizi[3]);
     
                   if(dizi[0]==dizitahmin[0]){
                      arti=arti + 1;}                   
                   
                   else{
                      if(dizi[0]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[0]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[0]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                 
                 if(dizi[1]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[1]==dizitahmin[1]){
                         arti=arti + 1;}
                      else{   
                         if(dizi[1]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[1]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                  
                  if(dizi[2]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[2]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[2]==dizitahmin[2]){
                              arti=arti + 1;}
  
                         else{
                              if(dizi[2]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                    
                    if(dizi[3]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[3]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[3]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[3]==dizitahmin[3]){
                                 arti=arti + 1;} 
                             }  
                           } 
                          }
                
                if(arti!=4){
                   printf("arti: (%d), eksi: (%d)\n\n",arti,eksi);
                   i++;
                   goto y;}
                     else{
                          printf("\nTebrikler tahmininiz dogru, tutulan sayi:%d%d%d%d\n",dizitahmin[0],dizitahmin[1],dizitahmin[2],dizitahmin[3]);                                             
                          printf("%d. tahminde buldunuz\n\n",i);}
                
                }
      
      void limitli(int j){
           srand(time(NULL));
           int i=1,arti,eksi,dizi[4],dizitahmin[4];
     printf("\n\n*** Let the game begin ***\n");
     x: 
     dizitahmin[0] = rand()%9 +1;
     
     dizitahmin[1] = rand()%10;
     
     dizitahmin[2] = rand()%10;
     
     dizitahmin[3] = rand()%10;
     
       if((dizitahmin[0]!=dizitahmin[1]) && (dizitahmin[1]!=dizitahmin[2]) && (dizitahmin[2]!=dizitahmin[3]) && (dizitahmin[0]!=dizitahmin[2]) && (dizitahmin[0]!=dizitahmin[3]) && (dizitahmin[1]!=dizitahmin[3]))
       {}
      else{
           goto x;}
     
     y: 
     if(i!=j){
     arti=0;
     eksi=0;
     printf("\nTahmininizi giriniz:");      
     scanf("%1d%1d%1d%1d",&dizi[0],&dizi[1],&dizi[2],&dizi[3]);
     
                   if(dizi[0]==dizitahmin[0]){
                      arti=arti + 1;}                   
                   
                   else{
                      if(dizi[0]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[0]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[0]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                 
                 if(dizi[1]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[1]==dizitahmin[1]){
                         arti=arti + 1;}
                      else{   
                         if(dizi[1]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[1]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                  
                  if(dizi[2]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[2]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[2]==dizitahmin[2]){
                              arti=arti + 1;}
  
                         else{
                              if(dizi[2]==dizitahmin[3]){
                                 eksi=eksi + 1;} 
                             }  
                           } 
                          }
                    
                    if(dizi[3]==dizitahmin[0]){
                    eksi=eksi + 1;}                   
                   
                   else{
                      if(dizi[3]==dizitahmin[1]){
                         eksi=eksi + 1;}
                      else{   
                         if(dizi[3]==dizitahmin[2]){
                              eksi=eksi + 1;}
  
                         else{
                              if(dizi[3]==dizitahmin[3]){
                                 arti=arti + 1;} 
                             }  
                           } 
                          }
                
                if(arti!=4){
                   printf("arti: (%d), eksi: (%d)\n\n",arti,eksi);
                   i++;
                   goto y;}
                     else{
                          printf("\nTebrikler tahmininiz dogru, tutulan sayi:%d%d%d%d\n",dizitahmin[0],dizitahmin[1],dizitahmin[2],dizitahmin[3]);                                             
                          printf("%d. tahminde buldunuz\n\n",i);} 
                }
  else{
     printf("Game Over beceriksiz!\n%c%c%c%c%c%c%c%c\n",1,2,1,2,1,2,1,2);
     printf("Tutulan sayi: %d%d%d%d\n\n",dizitahmin[0],dizitahmin[1],dizitahmin[2],dizitahmin[3]);
     }
     }
                           
                                                                                                   
