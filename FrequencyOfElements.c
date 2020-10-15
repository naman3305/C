#include <stdio.h>
void swap(int *, int *);
void bubblesort(int arr[], int n);
void printArray(int arr[], int size);
int BinarySearch(int A[], int N, int x, int searchFirst);
void bubbleSort(int arr[],int n)
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
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int BinarySearch(int A[],int N,int x,int searchFirst)
{ int n=-1,i;
    if(searchFirst==1)
    {
        for(i=0;i<N;i++)
        {
            if(A[i]==x)
            {
                n=i;
                break;
            }
        }
        return n;
    }
     if(searchFirst==0)
    {
        for(i=0;i<N;i++)
        {
            if(A[i]==x)
            {
                n=i;
            }
        }
        return n;
    }
}
int main()
{
	int array[100],target,num;
	scanf("%d",&num);//number of Elements in Array
	for(int i=0;i<num;i++)
	scanf("%d",&array[i]);
    scanf("%d",&target);//element to be searched
	bubbleSort(array, num);
    printf("Sorted Array:");
    printArray(array, num);
	int first = BinarySearch(array, num, target, 1);// pass value 1 for first occurrence of element

	int last = BinarySearch(array, num, target, 0);// pass value 0 for last occurrence of element

	int count = last - first + 1;

	if (first != -1)
		printf("Count:%d",count);
	else
		printf("Element not found in the array");

	return 0;
}
