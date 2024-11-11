#include <stdio.h>
int main()
  {
    int limit,array[100],i,l1,l2;

 printf("enter limit\t");
    scanf("%d",&limit);

    printf("\nenter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
      }
     for(i=0;i<limit;i++){
        if(array[i]>l1){
            l2=l1;
            l1=array[i];
        }else if(array[i]<l1 && array[i]>l2){
            l2=array[i];
        }
     }
    
     printf("\n1st large number is : %d",l1);
     printf("\n2nd large number is : %d",l2);

     
      return 0;
  } 
