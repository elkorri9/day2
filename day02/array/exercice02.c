int main() {
   
    int a , b , i ;
    
    printf("saisir combien d'element tu veux dans le tableau :");
    scanf("%d",&a);
     int table[a];
     for(i=0;i<a;i++){
         
         printf("saisir votre element sltp : ");
         scanf("%d",&b);
         table[i] = b ;
         
         
     }
     for(i=0;i<a;i++)
     printf("%d\n",table[i]);
     
    
    
    
    return 0;
}