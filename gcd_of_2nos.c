#include <stdio.h>
int main()
{
	int n1,n2;
  scanf("%d %d",&n1,&n2);
  printf("%d",gcd(n1,n2));
    return 0;
}

int gcd(int n1,int n2){
  if(n1==1||n2==1){
    return 1;
  }
  else if(n1==0&&n2!=0){
    return n2;
  }
  else if(n2==0&&n1!=0){
    return n1;
  }
  else if(n2<0){
  	return (-(n1));
  }
  else{
    return gcd(n2,n1%n2);
  }       
          
          
}
