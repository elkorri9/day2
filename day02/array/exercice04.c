#include <stdio.h>

int main() {
    int a , b , i ,max  ;
    
    printf("saisir combien d'element tu veux dans le tableau :");
    scanf("%d",&a);
     int table[a];
     for(i=0;i<a;i++){
         
         printf("saisir votre element sltp : ");
         scanf("%d",&b);
         table[i]=b ;
         max = table[0];
         
        
         
         
      
     }
     for(i=0;i<a;i++){
         if(max<table[i])
         max = table[i];
     }
     printf("le maximum des nombre est :%d ",max);
     
     
     
    
    
    
    return 0;
}
  