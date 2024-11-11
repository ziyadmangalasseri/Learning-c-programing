#include <stdio.h>

int main()
{
    int limit,values[100],i,j,k,temp;

    printf("enter limit");
    scanf("%d",&limit);
    printf("enter your values");   
      for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
      }
      printf("sorted values : \t");

      for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){

            if(values[i]>values[j]){
                temp=values[i];
                values[i]=values[j];
                values[j]=temp;
            }
        }
      }    
      for(i=0;i<limit;i++){
        printf("%d\t",values[i]);
      }
    

      

    return 0;
}
