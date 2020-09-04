#include<stdio.h>
void main()
{
    int i,j,x;
    for(i=1;i<=4;i++)
    {
         x=9-(2*i);
        for(j=1;j<=x;j++)
        {
            printf("%d",j);
        }
       printf("\n");
    }
    getch();
}

