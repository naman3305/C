#include <stdio.h>
#include <stdlib.h>
void remove_duplicates(int n,int *a);
void remove_duplicates(int n,int *a)
{
    int c,*b,count=0,d;
    b=(int*)malloc(n*sizeof(int));
    for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }
  for (c = 0; c < count; c++)
    printf("%d\n", b[c]);
}

 int main()
{
  int n, c;
  int *a;
  scanf("%d", &n); //no. of elements in array
  a=(int*)malloc(n*sizeof(int));

  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);

  remove_duplicates(n,a);
  return 0;
}
