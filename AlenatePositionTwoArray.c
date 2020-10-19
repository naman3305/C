#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    int n1,n2,n3,i,j,k,*a,*b,*c;

    scanf("%d",&n1);

    scanf("%d",&n2);
    n3=n1+n2;
    a=(int *)malloc(n1*sizeof(int));
    b=(int *)malloc(n2*sizeof(int));
    c=(int *)malloc(n3*sizeof(int));
    for(i=0;i<n1;i++)
    {
        scanf("%d",a+i);
    }

    for(i=0;i<n2;i++)
    {
        scanf("%d",b+i);
    }
    for(k=0,i=0,j=0;i<n1 && j<n2;k++)
    {
        if(k%2==0)
        {
            c[k]=a[i];
            i++;

        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
            i++;
            k++;
    }
    while(j<n2)
    {
        c[k]=b[j];
            j++;
            k++;
    }
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
	return 0;
}
