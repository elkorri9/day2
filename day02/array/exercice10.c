#include <stdio.h>

int main() {
  int element , i , n ; 
  int tableau[5];
  for (i=0 ; i<5 ; i++){
      printf("entrer les entier :");
      scanf("%d",&tableau[i]);
  }
  printf("saisir un nombre n : ");
  scanf("%d",&n);
  element=0;
  for (i=0;i<5;i++){
      if(n==tableau[i])
      element++;
      
  }
  if(element==0){
      printf("le nombre %d ne trouve pas dans le tableau",n);
  }
  else
  printf("le nembre %d se trouve dans le tableau .",n);
  
  

    return 0;
}