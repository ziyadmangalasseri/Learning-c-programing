#include <stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(j==1||j==5||j==i){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
}