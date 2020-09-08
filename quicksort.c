#include <stdio.h>
void swap(int* a,int* b)
{
    int temp=0;
    temp=*a,
    *a=*b;
    *b=temp;
}
int s(int a[],int l,int h)
{
    int i,j,t=0;
    i=l,j=h;
    int pivot=a[l];
    while(i<j)
    {
        while(a[i]<=pivot)
        {
            i++;
        }
       while(a[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
          swap(&a[i],&a[j]);
        }
    }
    swap(&a[j],&pivot);

    return j;
}
int qs(int a[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=s(a,l,h);
        qs(a,l,j-1);
        qs(a,j+1,h);
    }
}
int main()
{
 int n,i,h;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }

 qs(a,0,n-1);
         for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
