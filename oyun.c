#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  a:
   printf("\nOyunun kurallari :\n1)Bilgisayarin tuttugu sayi 4 basamaklidir.\n2)Sayinin rakamlari birbirinden farklidir.\n3)En soldaki basamak '0' olamaz.\n\nIyi eglenceler!\n\n");
   printf("Oyunu bastan baslatmak icin 0000 giriniz.\n\n");
   
   srand(time(NULL));
  
   int i,arti,eksi,dizitahmin[4],n,secenek;
  x: 
     dizitahmin[0] = rand()%9 +1;
     
     dizitahmin[1] = rand()%10;
     
     dizitahmin[2] = rand()%10;
     
     dizitahmin[3] = rand()%10;
     
       if((dizitahmin[0]!=dizitahmin[1]) && (dizitahmin[1]!=dizitahmin[2]) && (dizitahmin[2]!=dizitahmin[3]) && (dizitahmin[0]!=dizitahmin[2]) && (dizitahmin[0]!=dizitahmin[3]) && (dizitahmin[1]!=dizitahmin[3]))
       {}
      else{
           goto x;}
   
   int dizi[4];
   
   y:
   
   printf("Tahmininizi giriniz:\n");

   scanf("%d",&n);
  dizi[0]=(n-(n%1000))/1000;
  dizi[1]=((n%1000)-(n%100))/100;
  dizi[2]=((n%100)-(n%10))/10;
  dizi[3]=n%10;
  
  
  arti=0;
  
  eksi=0;
          
          if((dizi[0]==0)&&(dizi[1]==0)&&(dizi[2]==0)&&(dizi[3]==0))      
                goto a;
          else{      
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
                   goto y;}
                     else
                          printf("Tebrikler tahmininiz dogru, tutulan sayi:%d%d%d%d\n",dizitahmin[0],dizitahmin[1],dizitahmin[2],dizitahmin[3]);
                     }
   
   b:
   
   printf("Tekrar oynamak icin 1 e cikmak icin 2'ye basiniz.\n");                  
   scanf("%d",&secenek);
   
   if(secenek==1)
      goto  a;
   else{
        if(secenek==2)
           return 0;
        else
           printf("Yanlis secenek girdiniz tekrar deneyiniz. =) \n\n");
        }
                                            
   system("pause");
   
   printf("Oyun sablonu: \n Enes Gunhan\n\nOyunun programcisi : \n Ozan Arkan Can\n");

 system("pause");
 return 0;
}
