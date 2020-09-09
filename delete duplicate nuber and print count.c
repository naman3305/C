#include<stdio.h>
int main()
{
    int a[10],n,i,j,count=0,k;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
            j--;
            n--;
            }
        }
        printf("count of number ");
       printf("%d was%d\n",a[i],count);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
