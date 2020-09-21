#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter the numbers a,b");
    scanf("%d,%d",&a,&b);
    printf("Enter the no to be complemented ");
    scanf("%d",&g);
    printf("Enter the number of shifts");
    scanf("%d",&i);
    c=a&b;
    d=a|b;
    e=a^b;
    f=~g;
    h<<i;
    j>>i;
    printf("bitwise and=%d,bitwise or=%d,bitwise xor=%d,bitwise complement=%d,left shift=%d and right shift=%d",c,d,e,f,h,j);
    return 0;
}
