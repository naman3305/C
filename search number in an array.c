#include<stdio.h>
int main()
{
    int i,n,num,a[10],x=0,y;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter number to be searched");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            x=1;
            y=i+1;
            break;
        }
    }
    if(x!=0)
    {
        printf("number found at index %d",y);
    }
    else
        printf("not found");
}
