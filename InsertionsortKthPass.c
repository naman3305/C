#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int*,int,int);
int main()
{
	int *arr,n,i,k;
	//printf("Enter the no of array elements:");
	scanf("%d",&n);
	scanf("%d",&k);
		arr=(int*)malloc(n*sizeof(int));
	insertion_sort(arr,n,k);
	printf("\nIn Main:\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	return 0;
}
void insertion_sort(int *a,int n,int k)
{
    int i,j,key,index=0,m;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        key=a[i];
        index=i;
        for(j=i-1;j>=0;j--)
        {
            if(key<a[j])
            {
            a[j+1]=a[j];
            index=j;
            }
        }
        a[index]=key;

        if(i==k)
        {
            for(m=0;m<n;m++)
            printf("%d ",a[m]);
        }
    }
}
