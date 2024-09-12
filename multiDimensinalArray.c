#include <stdio.h>
int main()
{
    int values[100][100],i,j,limit;

    printf("enter limit");
    scanf("%d",&limit);

   printf("enter your values");

   for(i=0;i<limit;i++){
    for(j=0;j<limit;j++){
        scanf("%d",&values[i][j]);
    }
   }printf("you have endred values : \n");

   for(i=0;i<limit;i++){
    for(j=0;j<limit;j++){
        printf("%d\t",values[i][j]);

    }printf("\n");
   }

    return 0;
}
