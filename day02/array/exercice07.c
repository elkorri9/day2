#include <stdio.h>

int main() {
    int T[5];
    int tmp , i , j ;
    
    printf("veuillez saisir les elements de tableau : \n");
    
    for(i=0;i<5;i++){
        printf("T[%d]=",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(T[i]>T[j]){
                tmp=T[i];
                T[i]=T[j];
                T[j]=tmp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d\n",T[i]);
    }
    
    
    return 0;
}