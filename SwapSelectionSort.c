#include <stdio.h>
#include<stdlib.h>
int selectionsort(int *,int);
int main()
{
   int *ptr,n;
   scanf("%d",&n);
   int count=selectionsort(ptr,n);
   printf("%d",count);
   return 0;
}
int selectionsort(int *ptr,int n)
{
    int i,c=0,j,m,t=0;
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",&ptr[i]);
    for(i=0;i<n-1;i++)
    {
        m=i;
        for(j=i+1;j<n;j++)
        {
            if(ptr[j]<ptr[m])
            {
                m=j;
            }
        }
            if(m!=i)
            {
                t=ptr[m];
                ptr[m]=ptr[i];
                ptr[i]=t;
                c++;
            }
    }
    return c;
}
