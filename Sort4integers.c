void sort4Integers(int a, int b, int c, int d)
{
  if(a>b)
    swap(&a,&b);
  if(c>d)
    swap(&c,&d);
  if(a>c)
    swap(&a,&c);
  if(b>d)
    swap(&b,&d);
  if(b>c)
    swap(&b,&c);
  
  printf("%d\n%d\n%d\n%d",a,b,c,d);
}
void swap(int *a,int *b){
  int temp=*a;
  *a=*b;
  *b=temp;
}
