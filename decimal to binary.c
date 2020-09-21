#include <stdio.h>
int binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    return n%2+binary(n/2)*10;
}
int main()
{
    int n;
    pritnf("enter decimal number");
    scanf("%d",&n);
  printf("%d is in binary",binary(n));

    return 0;
}
