#include<stdio.h>
#include<math.h>
int ternarytodecimal(int n);
int main()
{
int n;
scanf("%d",&n);
int a;
a=ternarytodecimal(n);
printf("%d",a);
    return 0;
}
int ternarytodecimal(int n)
{
int r,s=0,i=0;
    while(n!=0)
    {
        r=n%10;
        s=s+r*pow(3,i);
        n=n/10;
        i++;
    }
    return s;
}
