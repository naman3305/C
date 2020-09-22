#include<stdio.h>

struct items
{
    char name[10];
    int quantity;
    int rate1;
    int rate2;
};
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    struct items s[n];
    for(int i=0;i<n;i++)
    {
        scanf(" %c",&s[i].name);
        scanf("%d%d%d",&s[i].quantity,&s[i].rate1,&s[i].rate2);
    }
    for(int i=0;i<n;i++)
    {
        if(s[i].rate1<s[i].rate2)
        {
          sum=sum +s[i].rate1*s[i].quantity;
        }
        else
        {
            sum=sum + s[i].rate2*s[i].quantity;
        }

    }
    printf("%d",sum);
}
