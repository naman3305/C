#include<stdio.h>
float si(double p,double r,int t)
{
  float q=(p*r*t)/100;
  return q;

}
void cal(double p,double r,int t)
{
 float x=si(p,r,t);
  printf("%.3f",x+p);

}
void main()
{
    int t;
   double p,r;
   printf("enter the principle,rate,time");
  scanf("%lf%lf%d",&p,&r,&t);
  cal(p,r,t);

}
