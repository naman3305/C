#include <stdio.h>
void findFact(int,int*);
int main()
{
         int fact;
         int num1;
         int  s=0;
scanf("%d",&num1);
findFact(num1,&s);
printf("%d",s);
}
void findFact(int n,int *s)
{
    int fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("%d\n",fact);
    while(fact>0)
    {
        *s=*s+fact%10;
        fact=fact/10;
    }

}
