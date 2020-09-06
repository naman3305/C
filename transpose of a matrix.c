#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n][n];
    printf("enter elements row wise");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("transpose of matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}
