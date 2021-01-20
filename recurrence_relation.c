int findTofK(int k)
{
  if(k==1)
  {
    return 3;
  }
  else
  {
    return (findTofK(k-1)+3*k);
  }
}
