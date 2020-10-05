#include <stdio.h>
int gcd(int i, int j);
int main()
{
int a,b,h;
printf("Enter two positive integers: ");
scanf("%d%d",&a,&b);
h=gcd(a,b);
printf("G.C.D of %d and %d is %d.",a,b,h);
}
int gcd(int i,int j)
{
    if(j==0)
    return i;
    else
    return gcd(j,i%j);
}
