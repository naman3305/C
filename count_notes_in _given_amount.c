#include <stdio.h>
int main()
{
  int n;
  int n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,n8=0,n9=0;
  scanf("%d",&n);
  
  while(n!=0)
  {
    if(n>=2000)
    {
      n1++;
      n-=2000;
    }
    else if(n>=500&&n<=2000)
    {
      n2++;
      n-=500;
    }
    else if(n>=100&&n<=500)
    {
      n3++;
      n-=100;
    }
     else if(n>=50&&n<=100)
    {
      n4++;
      n-=50;
    }
     else if(n>=20&&n<=50)
    {
      n5++;
      n-=20;
    }
     else if(n>=10&&n<=20)
    {
      n6++;
      n-=10;
    }
    else if(n>=5&&n<=10)
    {
      n7++;
      n-=5;
    }
    else if(n>=2&&n<=5)
    {
      n8++;
      n-=2;
    }
    else if(n>=1&&n<=2)
    {
      n9++;
      n-=1;
    }
  }
  printf("%d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5,n6,n7,n8,n9);
  return 0;
}
