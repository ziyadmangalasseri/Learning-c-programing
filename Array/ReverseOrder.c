// Manualy Revers order


#include <stdio.h>

int main()
{

  int limit, array[100], i, temp = 0;

  printf("enter limit\n");
  scanf("%d", &limit);

  printf("enter your values\n");
  for (i = 0; i < limit; i++)
  {
    scanf("%d", &array[i]);
  }

  for (i = 0; i < limit / 2; i++)
  {
    temp = array[i];
    array[i] = array[limit - i - 1];
    array[limit - i - 1] = temp;
  }

  for (i = 0; i < limit; i++)
  {
    printf("%d\t", array[i]);
  }

  return 0;
}