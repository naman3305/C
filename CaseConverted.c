#include<stdio.h>
void toggle(char *);
int main()
{
char n;
scanf("%c",&n);
toggle(&n);
}
void toggle(char *n)
{
    int i;
    i=*n;
    if(i<=65&&i>=92)
    {
        printf("%c",i+32);
    }
    else
    printf("%c",i-32);
}
