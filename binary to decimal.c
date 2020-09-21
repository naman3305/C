#include <stdio.h>
#include<math.h>
int decimal(int n)
{
    static int p=-1;
    p++;
    if(n==0)
    {
        return 0;
    }
    else
    return n%10*pow(2,p)+decimal(n/10);
}
int main()
{
    int n;
    printf("enter the binary number");
    scanf("%d",&n);
  printf("%d is in decimal",decimal(n));

    return 0;
}
