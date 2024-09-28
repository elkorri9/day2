#include <stdio.h>

int main() {
    int a , b , i ,min  ;
    
    printf("saisir combien d'element tu veux dans le tableau :");
    scanf("%d",&a);
     int table[a];
     for(i=0;i<a;i++){
         
         printf("saisir votre element sltp : ");
         scanf("%d",&b);
         table[i]=b ;
         min = table[0];
         
        
         
         
      
     }
     for(i=0;i<a;i++){
         if(min>table[i])
         min = table[i];
     }
     printf("le minimum des nombre est :%d ",min);
     
     
     
    
    
    
    return 0;
}
  