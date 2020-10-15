#include<stdio.h>
void Sort(int arr[], int);
int token(int a[],int,int );

void Sort(int arr[],int n)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int token(int a[],int n,int k)
{
    int i,j,temp=0;
    scanf("%d",&k);
    for(i=k;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return (a[k]+a[n-1]);
}
int main()
{
int i,l,k,n,arr[100],b[100];
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
    b[i]=arr[i];
}
Sort(arr,n);

    for (i = 0; i < n; i++)
        printf("%d ",arr[i]);
    printf("\n");

l=token(b,n,k);
printf("%d",l);
}
