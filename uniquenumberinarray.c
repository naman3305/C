#include<stdio.h>
int main()
{
    int a[100],i,j,n,u;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("unique numbers are :\n");
    for(i=0;i<n;i++)
    {
        u=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    u=1;
                }
            }
        }
        if(u==0)
        {
            printf("%d ",a[i]);
        }
    }
}
