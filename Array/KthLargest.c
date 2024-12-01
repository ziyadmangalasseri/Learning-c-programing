#include <stdio.h>

void main()
{

    int i, j, k, temp=0;
    int array[100], limit;

    printf("Enter limit ");
    scanf("%d", &limit);
    printf("Enter elements");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("enter Kth ");
    scanf("%d", &k);

    for (i = 0; i < limit - 1; i++)
    {
        for ( j = i+1; j < limit; j++)
        {
             if (array[i] < array[j])
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
        }
        
       
    }
    printf("%d",array[k-1]);
}