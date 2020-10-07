#include<stdio.h>
#include<math.h>
float fact(int);
float divide(int,float);
main()
{
	int n;
	float sum=0;
	float final;
	scanf("%d",&n);
	final=divide(n,sum);
	printf("%.2f",final);
}
float divide(int n,float sum)
{
	while (n>=1)
	{
		sum=sum+pow(n,n)/fact(n);
		n--;
	}
	return sum;
}

float fact(int n)
{
	float mul=1.0;
	if(n==1)
		return 1;
	else
		mul=n*fact(n-1);
	return mul;
}
