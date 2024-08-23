#include <stdio.h>
int main(){
    int i,j,array[100],f=0,limit,b[100];
    printf("Enter your limi:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<limit;i++){
         if(array[i]%3==0){
            array[i]=0;
            
         }
         
    }
    for(i=0;i<limit;i++){
        if(array[i]!=0){
        printf("%d\t",array[i]);
        }
    }
  
    return 0;
}