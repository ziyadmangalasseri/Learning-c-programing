//  Write a program to find the count of unique elements in an array and also find its sum.

#include <stdio.h>

void main(){
    int i,j,limit,count=0,flag,sum=0;
    int array[100];

    printf("enter limit");
    scanf("%d",&limit);
    printf ("enter values");
      for ( i = 0; i < limit; i++)
      {
        scanf("%d",&array[i]);
      }

      for ( i = 0; i < limit-1; i++)
      {
        flag=0;
        for ( j = 0; j < limit; j++)
        {
            if(i!=j && array[i]==array[j]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            count++;
        }
        
      }
      
      for ( i = 0; i < limit; i++)
      {
        sum = sum+array[i];
      }
      printf("\ncount of unique numbers : %d",count);
      printf("\nsum of all elements %d",sum);
      
}