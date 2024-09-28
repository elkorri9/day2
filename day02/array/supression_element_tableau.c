
#include <stdio.h>

int main() {
   
   int T[5]= {1,2,3,4,5};
   int remove = 1 , size = sizeof(T) / sizeof(T[0]);
   int j , i ;
   
   for (int i = 0;i<5;i++){
       if (T[i]==2){
           remove = i ;
           break;
       }
   }
   for ( j=remove;j<5-1;j++){
       T[j] = T[j+1];
   }
   size --;
   for (int i = 0;i<5-1;i++){
       printf("%d",T[i]);
   }
   
   

    return 0;
}
