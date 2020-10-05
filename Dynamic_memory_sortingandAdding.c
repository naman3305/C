// You are using GCC
arr1=(int*)calloc(n+1,4);
#include <stdio.h>
#include<stdlib.h>
int main()
{
   int *arr1,i,a,j,n,p,inval;
    scanf("%d", &n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr1[i]);
}
scanf("%d",&a);
for(i=n-1;i>=0;i--)
{
    arr1[i+1]=arr1[i];
}
arr1[0]=a;


for(i=0;i<=n;i++)
{
    for(j=i+1;j<=n;j++)
    {
        if(arr1[i]>=arr1[j])
        {
            inval=arr1[i];
            arr1[i]=arr1[j];
            arr1[j]=inval;
        }
    }
}
for(i=0;i<=n;i++)
{
    printf("%d\n",arr1[i]);
}
}
