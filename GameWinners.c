// You are using GCC
#include<stdio.h>
int main()
{
    int x,y,i,j,t=0,n=0;
    scanf("%d",&x);
    scanf("%d",&y);
    n=x+y;
    int a[n];
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=x;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
