#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the number");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
         printf("%d",j);
        }
        printf("\n");
    }
    getch();
}
