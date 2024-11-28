//  replace all odd numbers in an array with -1 and print the array in reverse order

#include <stdio.h>

int main()
{

    int array[100], limit, i, j;

    printf("enter array limit");
    scanf("%d", &limit);
    printf("enter elements");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < limit; i++)
    {
        if (array[i] % 2 == 1)
        {
            array[i] = -1;
        }
    }
    for (i = limit-1; i >= 0; i--)
    {
        printf("%d\t",array[i]);
    }

}