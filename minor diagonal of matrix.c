#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n][n];
    printf("enter matrix row wise");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==(n-i-1))
            {
                printf("\n%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
    }
    printf("\n%d",sum);
}
