#include <stdio.h>

int main()
{
  int array[100], n, c, d, position,num_elements, i,g=0,swap,testcase;
 scanf("%d",&testcase);
    while(testcase--)
    {
      i=0;
      g=0;
        scanf("%d",&num_elements);
        n=num_elements;
    while(i<n && scanf("%d",&array[i])==1)
    i++;
  for (c = 0; c < (n - 1); c++)
  {
    position = c;

    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c)
    {
      swap = array[c];
      array[c] = array[position];
      array[position] = swap;
      g++;
    }
  }
      printf("%d\n",g);
    }


  return 0;
}
