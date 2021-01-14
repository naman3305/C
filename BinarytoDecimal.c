#include <stdio.h>

int binaryToDecimal(int n)
{
  int decimal=0,rem,base=1;
  while(n!=0)
  {
    rem=n%10;
    decimal+=rem*base;
    base*=2;
    n/=10;
  }
  return decimal;
}

int main(){
int n;
printf("Enter the no");
scanf("%d",&n);
printf("Binary to Decimal conversion of %d is %d.",n,binaryToDecimal(n));
}
