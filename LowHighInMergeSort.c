#include<stdio.h>
void Merge_sort(int a[],int low,int high);
void merge(int a[],int low,int mid,int high);

int main()
{
    int i,n,c,low,high,k=0;
    scanf("%d",&c);
    while(k<c)
    {
     scanf("%d",&n);
     int a[n];
     for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    low=0;high=n-1;
    printf("case %d\n",++k);
    Merge_sort(a,low,high);
    }

    return 0;
}
void Merge_sort(int a[],int low,int high)
{
   int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        Merge_sort(a,low,mid);
        Merge_sort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[],int low,int mid,int high)
{
    printf("%d %d\n",low,high);
    int b[high],r,i=low,j=mid+1,k=low;

    while((i<=mid) && (j<=high))
      {
        if(a[i]<a[j])
         {b[k]=a[i];i++;}
        else
        {b[k]=a[j];j++;}
        k++;
      }
    if(i>mid)
      {
       for(r=j;r<=high;r++)
        {b[k]=a[r];k++;}
      }
    else
    {
      for(r=i;r<=mid;r++)
        {b[k]=a[r];k++;}
     }
    for(k=low;k<=high;k++)
    {
        a[k]=b[k];
    }
}
