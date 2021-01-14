int arraysEqualorNot(int size_A, int* A, int* B) {

  for(int i=0;i<size_A;i++)
  {
    for(int j=i+1;j<size_A;j++){
      if(*(A+i)>*(A+j))
      {
        int temp=*(A+i);
        *(A+i)=*(A+j);
        *(A+j)=temp;
        
      }
    }
  }
   for(int i=0;i<size_A;i++)
  {
    for(int j=i+1;j<size_A;j++){
      if(*(B+i)>*(B+j))
      {
        int temp=*(B+i);
        *(B+i)=*(B+j);
        *(B+j)=temp;
        
      }
    }
  }
  
  for(int i=0;i<size_A;i++)
  {
   if(*(A+i)!=*(B+i))
   {
     return 0;
   }
  }
  return 1;
  
}
