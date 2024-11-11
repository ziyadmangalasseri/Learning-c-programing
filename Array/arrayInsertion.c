#include <stdio.h>
int main()
{

    int limit,num,array[100],i,position;

 printf("enter limit\t");
    scanf("%d",&limit);

    printf("\nenter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
      }
      printf("enter position");
      scanf("%d",&position);

      printf("enter add number");
      scanf("%d",&num);

      for(i=limit;i>position-1;i--){
       array[i+1]=array[i];
        
      }array[position]=num;

      for(i=0;i<=limit;i++){
         printf("%d \t",array[i]);
      }
    

      
      return 0;
}