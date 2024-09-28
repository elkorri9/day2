#include <stdio.h>

int main() {
   
   int T[5]= {1,2,3,4,5};
   int Td [5];
   
    for(int i = 0;i<5;i++){
       
      Td[i] = T[i];
   }
  
    for(int i = 0;i<5;i++){
        
        printf("%d\n",T[i]);
        
        
    }
    for(int i = 0;i<5;i++){
      printf("%d\n",Td[i]);
        
    }
   

    return 0;
}