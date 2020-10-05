// You are using GCC
#include<stdio.h>
int search(int a[],int n,int *no)
{
    int i,x=1,y;
    for(i=0;i<n;i++)
    {
        if(a[i]==*no)
        {
            x=0;
            y=i;
            break;
        }
    }
    if(x==0)
    printf("%d is found at %d position.",*no,y+1);
    else
    printf("%d does not exists in array.",*no);



}
int main()
{
    int n,i,num;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&num);
    search(a,n,&num);
}
