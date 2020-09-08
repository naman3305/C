#include <stdio.h>
int ms(int a[],int lb,int ub)
{
    int mid=0;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        ms(a,lb,mid);
        ms(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int merge(int a[],int lb,int mid,int ub)
{
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    int b[100];
    while(i<=mid&&j<=ub)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(k=lb;k<=ub;k++)
    {
        a[k]=b[k];
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ms(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
