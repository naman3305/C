#include<stdio.h>
int main()
{
    int a[10],i,n,j;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               printf("%d ",a[j]);
           }
       }
    }
}
