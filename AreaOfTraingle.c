#include<stdio.h>
void read(float *base,float *height);
void calculate_area(float *base,float *height,float *area);
int main()
{
float b=0,h=0,a=0;
read(&b,&h);
calculate_area(&b,&h,&a);
printf("%.2f",a);
}
void read(float *base,float *height)
{
    scanf("%f%f",base,height);
}
void calculate_area(float *base,float *height,float *area)
{
    *area=0.5 * (*height) * (*base);
}
