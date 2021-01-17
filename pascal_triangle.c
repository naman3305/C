
/*
Print the following pascal traingle for n no of rows.
1
1*1
1*2*1
1*3*3*1
1*4*6*4*1
1*5*10*10*5*1

*/




void pascalTriangle(int k) 
{
for(int n=0;n<k;n++)
{
  for(int r=0;r<=n;r++)
  {
    int num = fact(n) / (fact(r) * fact(n-r));
    
    printf("%d",num);
    if(r==n)
    {
      printf("");
    }
    else
    {
      printf("*");
    }
  }
  printf("\n");
}
}
int fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++){
    f=f*i;
  }
  return f;
}
