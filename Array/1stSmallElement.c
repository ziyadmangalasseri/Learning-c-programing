#include <stdio.h>
  
void main()
  {
    int limit,array[100],i,l1,l2;
    
        
     l1= array[0];
     l2= array[0];

 printf("enter limit\t");
    scanf("%d",&limit);

    printf("\nenter your values\n");
      for(i=0;i<limit;i++){
       scanf("%d",&array[i]);
      }
      for(i=0;i<limit;i++){ 
        if(array[i]<l1){
            l2=l1;
            l1=array[i];
        }else if(array[i]<l2 && array[i]>l1){
            l2=array[i];
        }
        }
      
    
     printf("\n1st small number is : %d",l1);
     printf("\n2nd small number is : %d",l2);
  } 
