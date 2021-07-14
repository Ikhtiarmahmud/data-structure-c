#include <stdio.h>

int main()
{
  int array[100], n, i, j, swap;

  
  // enter number of elements
  scanf("%d", &n);

  
  // make an array
  for (i = 1; i <= n; i++)
    scanf("%d", &array[i]);

  for (i = 1 ; i <= n; i++)
  {
    for (j = 1 ; j <= n - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 1; i <= n; i++)
     printf("%d\n", array[i]);

  return 0;
}
