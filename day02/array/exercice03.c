#include <stdio.h>

int main() {
    int a , b , i ,rs =0 ;
    
    printf("saisir combien d'element tu veux dans le tableau :");
    scanf("%d",&a);
     int table[a];
     for(i=0;i<a;i++){
         
         printf("saisir votre element sltp : ");
         scanf("%d",&table[b]);
         
         
      rs =  rs + table[b] ;
     }
     
     printf("%d",rs);
     
    
    
    
    return 0;
}
  