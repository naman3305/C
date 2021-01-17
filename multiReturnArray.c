/* use the array a and store the minimum, maximum and sum of array elements in respective pointer variables.
As these are used in main functions, so just store the values in them. */

void multiReturnArray(int *a, int size, int *min, int *max, int *sum)
{
  int *a1=a;
 	for(int i=0;i<size;i++)
    {
      *sum+=*a1;
      a1++;
    }
 
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if((*(a+j))<(*(a+i)))
      {
       int temp= *(a+j);
        *(a+j)= *(a+i);
        *(a+i)= temp;
      }
    }
  }
 *min=*a;
  *max=*(a+size-1);
 return min,max,sum;
}
