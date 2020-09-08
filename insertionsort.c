#include <stdio.h>
int insertionsort(int a[],int n)
{
    int i,j,key=0;
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    insertionsort(a,n);

    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}
