#include <stdio.h>
int countDigits(int num);

int main()
{
int n;
printf("Enter a positive integer number: ");
scanf("%d",&n);
printf("Total digits in number %d is: %d",n,countDigits(n));
}
int countDigits(int num)
{ static int count=0;
 if(num==0)
 return count;
 else
 {count++;
 return countDigits(num/10);
 }
 }
