#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],j,z,temp=0,m;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[m])
            {
                m=j;
            }
        }
        if(m!=i)
        {
            temp=a[i];
            a[i]=a[m];
            a[m]=temp;
        }
        for(z=0;z<n;z++)
        {
            printf("%d ",a[z]);
        }
        printf("\n");
    }
}
