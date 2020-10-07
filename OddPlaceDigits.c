#include<stdio.h>
#include<math.h>
int Odd_place_digit(int n);

static int c=1;
static int j=0;



int Odd_place_digit(int n)
{
if(n==0)
return 0;
else if((c%2)!=0)
{
c++;
return (((n%10)*pow(10,j++)) + (Odd_place_digit(n/10)));
}
else
{
c++;
return (Odd_place_digit(n/10));
}
}
int main()
{
int n,i,b;
scanf("%d",&n);
b=Odd_place_digit(n);
printf("%d",b);
}
