#include <stdio.h>
void kthsmallest(int arr[],int n);
int main()
{
int n,num;
scanf("%d",&n);
int a[n];
kthsmallest(a,n);
}
void kthsmallest(int arr[],int n)
{

    int i,j,k,t=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("%d",arr[k-1]);
}
