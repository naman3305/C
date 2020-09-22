#include<stdio.h>
int main()
{
    int a,x=0;
    while(x!=1)
    {
    printf("Enter the number for which you want the table");
    scanf("%d",&a);
    printf("Enter the multiple");
    scanf("%d",&x);
    printf("%d*%d=%d\n",a,x,a*x);
    printf("Enter another multiple or enter 1 to end");
    scanf("%d",&x);
    }
    return 0;
}
