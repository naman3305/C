#include <stdio.h>
int evenDigits(int n)
{
  int even=0;
  if(n==0){
    return 0;
  }
  if((n%10)%2==0){
    even=n%10+10*evenDigits(n/10);
  }
  else
  {
    even=evenDigits(n/10);
  }
  return even;
}

int main(){
int n;
scanf("%d",&n);
printf("%d",evenDigits(n));
}
