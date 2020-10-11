#include<stdio.h>
int main()
{
    int t,count=0,temp=0;
    scanf("%d",&t);
    while(t!=0)
    {
        int n;
        scanf("%d",&n);
        int a[n],i,j;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n-1;i++)
        {
            for(j=0;j<=n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j+1];
                    a[j+1]=a[j];
                    a[j]=temp;
                    count++;
                }
            }
        }
        printf("%d\n",count);
        count=0;
        t--;
    }
}
