#include <stdio.h>
void main(){


   int i,j,array[100],limit,temp,flag=0,c=1,f=0;

   printf("Enter your limi:\n");
    scanf("%d",&limit);

    printf("Enter your values:\n");
    for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
    }
         for(i=0;i<limit-1;i++){
            c=1;
             for(j=i+1;j<limit;j++){
                if(array[i]==0){
                    continue;
                  }else if(array[i]==array[j]){
                     c++;
                     array[j]=0;
                  }
         }if(c>1){
            printf("\n%d repeated %d times",array[i],c); 
         }
         }
}