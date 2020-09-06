#include<stdio.h>
int main()
{
    int i,j,n,u=1;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the elements row wise");
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
                if(j<i && a[i][j]!=0)   //for lower triangular matrix change the condition to if(j>i&&a[i][j]==0)
                {
                    u=0;
                    break;
                }
            }
    }
    if(u==1)
    {
        printf("upper triangular matrix");
        for(i=0;i<n;i++)
        {
            printf("\n");
            for(j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
        }
    }
    else
        printf("not upper triangular matrix");
}
