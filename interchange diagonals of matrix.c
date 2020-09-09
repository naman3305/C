#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter size of matrix");
    scanf("%d",&n);
    int a[n][n],b[n][n];
    printf("enter elements row wise");
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
            if(i==j)
            {
                b[i][j]=a[i][j];
                a[i][j]=a[i][(n-1)-i];
                a[i][(n-1)-i]=b[i][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
    }

}
