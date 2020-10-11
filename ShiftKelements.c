#include<stdio.h>
int main()
{
    int i,j,r,n,k;
    scanf("%d",&r);
    int a[r][r];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=0;i<r;i++)
    {
        for(j=n;j<r;j++)
        {
            printf("%d",a[i][j]);
        }
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
