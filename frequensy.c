#include <stdio.h>
int main (){

    int array[100],i,j,limit,frequency,b[100];
    printf("enter limit");
    scanf("%d",&limit);
    printf("enter values");
      for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
      }
      printf("Frequency is this:\n");
      for(i=0;i<limit;i++){
        frequency=1;
            for(j=i+1;j<limit;j++){
                if(array[i]==array[j]){
                    array[j]=0;
                    frequency++;
                  }
                  b[i]=frequency;
            }
      }
      for(i=0;i<limit;i++){
        if(array[i]!=0){
            printf("%d :: %d\n",array[i],b[i]);
        }
      }

return 0;
}