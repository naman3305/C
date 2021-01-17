#include <stdio.h>
/* Include other headers as needed */
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n,n1=0,n2=1,n3;
  scanf("%d",&n);
  
  for(int i=0;i<n;i++)
  {
    printf("%d\n",n1);
    n3=n1+n2;
    n1=n2;
    n2=n3;
  }
    return 0;
}
