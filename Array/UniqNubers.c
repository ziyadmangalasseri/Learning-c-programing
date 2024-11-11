
#include <stdio.h>
int main(){
    int i,j,array[100],limit,temp,unq=1;
    printf("Enter your limi:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
    printf("unique values :  ");
    for(i=0;i<limit;i++){
        unq=0;
        for(j=0;j<=limit;j++){
            if(i!=j){
                if(array[i]==array[j]){
                unq++;
                
                break;
                }
            }
        }
        if(unq==0){
        printf("%d\t",array[i]);
        }
    }
   
    
    return 0;
}