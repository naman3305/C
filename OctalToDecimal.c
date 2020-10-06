#include <stdio.h>
#include <math.h>
long octalToDecimal(int octalnum)
{
int d=0,i=0,o;
o=octalnum;
while(o!=0)
{
    d=d+o%10*pow(8,i);
    i++;
    o=o/10;
}
return d;
}
