#include <stdio.h>
#include<stdlib.h>
int main()
{
    int *arr1, n,ctr=0;
    int i, j, k;
	scanf("%d",&n);
	// You are using GCC
arr1=(int*)calloc(n,4);
for(i=0;i<n;i++)
{
    scanf("%d",&arr1[i]);
}
for(i=0;i<n;i++)
{
    ctr=0;
    for(j=0;j<i-1;j++)
    {
        if(arr1[i]==arr1[j])
        {
            ctr++;
        }
    }
    for(k=i+1;k<n;k++)
    {
        if(arr1[i]==arr1[k])
        {
            ctr++;
        }
    }
    if(ctr==0)
    {
        printf("%d\n",arr1[i]);
    }
}
}
