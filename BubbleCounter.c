#include<stdio.h>
int main()
{
    int i,j,n,t=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                c++;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
    printf("\nBubbles crossed = %d",c);
}