#include<stdio.h>
 int sumofdigits(int);
 int rev(int);
 int main()
 {
   int num,reverse;
   scanf("%d",&num);
   reverse=rev(num);
    printf("%d\n",reverse);
   int y=sumofdigits(reverse);
   printf("%d",y);
   return 0;
 }
 int sumofdigits(int num)
{
    if (num != 0)
    {
        return (num % 10 + sumofdigits(num / 10));
    }
    else
    {
       return 0;
    }
}

  int rev(int num)
 {
   static int rev_sum,r;
   if(num)
   {
     r=num%10;
     if(r%2==0)
     {
     rev_sum=rev_sum*10+r;
     }
     rev(num/10);
      return rev_sum;
   }
   else
     return 0;
 }
