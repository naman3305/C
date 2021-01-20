#include <stdio.h>
int main()
{
   int no;
   scanf("%d",&no);
	prime(no);
   return 0;
}
void prime(int n){
  int i=2;
  if(n==1)
  {
    return 1;
  }
  else{
  while(n%i!=0)
  {
   i++; 
  }
    printf("%d\n",i);
    prime(n/i);
  }
}
