#include <stdio.h>
int main()
{
    char str[100]; /* Declares a string of size 100 */
    int l,i;
    i=0;
scanf("%[^\n]s",str);
while(str[i]!='\0')
{
    l++;
    i++;
}
       for(str[l]='\0';l>=0;l--)
        {
          printf("%c ", str[l]);
        }
    printf("\n");

}
