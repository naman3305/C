#include<stdio.h>
int main()
{
    int m,n,i,j,x,f=0;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    scanf("%d",&x);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==x)
            {
                printf("%d %d",i,j);
                f=1;
                break;
            }
        }
    }
    if(f==0)
    printf("Not Found");
}
