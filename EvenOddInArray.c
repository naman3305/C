#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i=0,j=0,k=0,n;
    char choice;
    //printf("Enter No. of Element:");
    scanf("%d",&n);
    int Even[n],Odd[n];
    p=(int*)malloc(n*sizeof(int));
   while((i+j)<n&&k<n)
    {
   scanf("%d",p);
   if((*p)>0)
     {
      if((*p)%2==0)
        {
        Even[i]=(*p);
        i++;
        }
     else
     {
       Odd[j]=(*p);
        j++;
     }

     }
p++;k++;
    }
    printf("Even No.:");
    if(i!=0)
    {
        for(k=0;k<i;k++)
        printf(" %d",Even[k]);
    }
    printf("\n");
    printf("Odd No.:");
    if(j!=0)
    {
     for(k=0;k<j;k++)
     printf(" %d",Odd[k]);
    }
    return 0;
}
