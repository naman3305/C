#include <stdio.h>
#define str_size 100
int main()
{
    char str[str_size];
    int i;
i=0;
int count=1;
scanf("%[^\n]s",str);
while(str[i])
{
    if(str[i]==' '&& str[i+1]!=' ')
    {
        count++;
    }
    i++;
}
printf("%d",count);
}
