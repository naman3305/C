#include<stdio.h>
int main()
{
    int n,i,j,k=0,z;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;

        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
        for(z=0;z<n;z++)
        {
            printf("%d ",a[z]);
        }
        printf("\n");
    }


}
