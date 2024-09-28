#include <stdio.h>

int main() {
   int tableau[5]={1,2,3,4,5};
   int tempo ;
   
   for(int i=0 ; i<5/2;i++){
       tempo = tableau[i];
       tableau[i]=tableau[5-i-1];
       tableau[5-i-1]=tempo;
       
   }
   for(int i=0 ; i<5;i++){
       printf("%d",tableau[i]);
   }

    return 0;
}