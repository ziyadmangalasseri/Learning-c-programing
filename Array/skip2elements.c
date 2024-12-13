//  Write a program to print the array by skipping two values next to the multiples of 5

#include <stdio.h>

void main()
{
    int i, j, array[100], limit;

    printf("enter limit ");
    scanf("%d", &limit);
    printf("enter values");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }

    for (i = 0; i < limit; i++)
    {
        if (array[i] % 5 == 0)
        {
            array[i+1] = -1;
            array[i+2] = -1;
        }
    }
    for ( i = 0; i < limit; i++)
    {
        if(array[i] != -1){
            printf("%d\t",array[i]);
        }
    }
    
}