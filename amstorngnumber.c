#include<stdio.h>
#include<math.h>
void main()
{
    int r=0,x,a,n,dig=0,i;
   printf("enter the number ");
    scanf("%d",&n);
   a=n;
    while(a!=0)
    {
       a=a/10;
       ++dig;
    }
    printf("%d",dig);
    a=n;
    while(a!=0)
    {
    x=a%10;
    r=r+pow(x, dig);
    a=a/10;
    }

      if(r==n)
    {
        printf("%d is amstrong",n);
    }
    else
    {
        printf("%d is not amstrong ",n);
    }
    getch();
}
