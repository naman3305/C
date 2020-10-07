#include<stdio.h>
long int calculate(int,int);

long int calculate(int x,int n)
{    int i,sum=1,j;
    long int cal=0;
    if(n==0&&x==0)
    return 0;
    if(n==0)
    return 1;
    for(i=1;i<=n;i++)
    {
    sum=1;
        for(j=1;j<=i;j++)
        {
        sum=sum*x;

        }

    cal=cal+sum;
    }
    return cal;
}
int main()
{
    int x,n;
    scanf("%d",&x);
    scanf("%d",&n);
    printf("%ld",calculate(x,n));
    return 0;
}
