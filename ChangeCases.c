#include <stdio.h>
#include <string.h>
#include <ctype.h>
void convert(char *str);
int main()
{
  char str[100];
// You are using GCC
scanf("%[^\n]s",str);
convert(str);
}
void convert(char *str)
{
    int l;
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
       else if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
    printf("%s",str);
    }
