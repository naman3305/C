#include<stdio.h>
int main()
{
    int a,c,num,x=0,t;
    printf("Enter 1 for chips Rs=10");
    printf("\nEnter 2 for cold drink Rs=40");
    printf("\nEnter 3 for burger Rs=50");
    printf("\nEnter 4 for noodles Rs=90");
    scanf("%d",&a);
    printf("\nEnter the quantity");
    scanf("%d",&num);
    switch(a)
    {
        case 1:
            c=10*num;
            printf("total amount = %d",c);
            break;
        case 2:
            c=40*num;
            printf("total amount = %d",c);
            break;
        case 3:
            c=50*num;
            printf("total amount = %d",c);
            break;
        case 4:
            c=90*num;
            printf("total amount = %d",c);
            break;
        default:
            printf("error");
            break;
}
    return 0;
}
