#include<stdio.h>
int specialNumber(int);
int armstrong(int n);
int specialNumber(int n)
{
    int m=0,j=1,flag=0;
    for(int i=0;i<3;i++)
    {
        m+=(n%10)*j;
        j*=10;
        n/=10;
    }
    printf("%d\n",m);
    if(armstrong(m))
    {
        return 1;
    }
    else
    return 0;
}
int armstrong(int n)
{
     int rev,sum1=0,sum,m;
    m=n;
    while(n!=0)
    {
        sum=n%10;
        sum1+=(sum*sum*sum);
        n/=10;
    }
    if(sum1==m)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",specialNumber(n));
    return 0;
}
