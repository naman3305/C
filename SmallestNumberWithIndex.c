#include<stdio.h>
void read_array(int *arr,int *size);
void find_smallest(int *arr,int *size,int *small,int *pos);
int main()
{
int n,s,p=0;
scanf("%d",&n);
int a[n];
read_array(a,&n);
s=a[0];
find_smallest(a,&n,&s,&p);
printf("%d\n%d",s,p);
}
void read_array(int *arr,int *size)
{
    int i;
    for(i=0;i<*size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void find_smallest(int *arr,int *size,int *small,int *pos)
{
    int i;
    for(i=0;i<*size;i++)
    {
        if(*small>arr[i])
        {
           *small=arr[i];
           *pos=i;
        }
    }
}
