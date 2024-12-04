#include <stdio.h>

void main (){
    int i,j,limit,o=0,e=0;
    int array[100],odd[100],even[100];

    printf("enter limit");
    scanf("%d",&limit);
    printf("enter values");
    for ( i = 0; i < limit; i++)
    {
        scanf("%d",&array[i]);
    }
    
    for ( i = 0; i < limit; i++)
    {
        if (array[i]%2==0)
        {
            even[e]=array[i];
            e++;
        }else{
            odd[o]=array[i];
            o++;
        }
        
    }
    
    printf("\nodd numbers is : ");
    for ( i = 0; i < o; i++)
    {
        printf("%d\t",odd[i]);
    }
    

    printf("\neven numbers is : ");
    for ( i = 0; i < e; i++)
    {
        printf("%d\t",even[i]);
    }

}