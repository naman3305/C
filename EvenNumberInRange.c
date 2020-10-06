#include<stdio.h>
void print_even_numbers(int *m,int *n);
int main()
{
int m,n;
scanf("%d%d",&m,&n);
print_even_numbers(&m,&n);
}
void print_even_numbers(int *m,int *n)
{
    int i;
    for(i=*m;i<=*n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
