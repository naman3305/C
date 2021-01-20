#include <stdio.h>
/* Include other headers as needed */
int main()
{

  /*
    
  //////print this type of pyramid with taking no of lines to be printed as input from user.
  
    1
    1 2 1
    1 2 3 2 1
    1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
    
    */

  int n;
  scanf("%d",&n);

  
    for(int i=1;i<=n;i++)
    {
      for(int j=1;j<=i;j++)
      {
        printf("%d",j);
      }
      for(int j=i-1;j>=1;j--)
      {
        printf("%d",j);
      }
      printf("\n");
    }
    
  
    return 0;
}
