#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int ar[10];
  for(int i=0;i<10;i++)
  {
    scanf("%d",&ar[i]);
  }
  int pos=positiveno(ar);
  int neg=10-pos;
  int even=evenno(ar);
  int odd=10-even;
  
  
  printf("%d\n%d\n%d\n%d",pos,neg,even,odd);
    return 0;
}

int positiveno(int ar[]){
  int count=0;
  for(int i=0;i<10;i++)
  {
    if(ar[i]>0)
    {
      count++;
    }
  }
  return count;
}

int evenno(int ar[])
{
  int count=0;
  for(int i=0;i<10;i++)
  {if(ar[i]<0)
  {
    ar[i]=-ar[i];
  }
    if(ar[i] % 2 == 0)
    { count++;}
    
  }
  return count;
}
