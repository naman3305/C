#include<stdio.h>
int main()
{
    int i,j,n=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            printf("%d",n);
            n++;
        }

    printf("\n");
    }
    return 0;
}
