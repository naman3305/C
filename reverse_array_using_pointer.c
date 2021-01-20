void reverseArray(int *a, int size)
{ 
    int *first=a;
    int *last=a+size-1;
    while(first<last)
    {
      int temp=*first;
      *first=*last;
      *last=temp;
      first++;
      last--;
    }
    return a;
  
}
