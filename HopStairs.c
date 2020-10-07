#include<stdio.h>
 int count=0;
void path(int n)
{
    if(n==1)
    count++;
    else if(n==2)
    count+=2;
    else if(n==3)
    count+=4;
    else
    {
        path(n-1);
        path(n-2);
        path(n-3);
    }

}
int main()
{
    int n;
   printf("Enter number of stairs");
    scanf("%d",&n);
    path(n);
    // ways count to run up the stairs
    printf("%d",count);
}
