#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("enter first matrix elements row wise");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matrix elements row wise");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            c[i][k]=0;
        for(j=0;j<n;j++)
        {
            c[i][k]=c[i][k]+a[i][j]*b[j][k];
        }
        }
    }
    printf("product of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
