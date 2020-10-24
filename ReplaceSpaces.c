#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char ch;
    scanf("%[^\n]s",str);
    scanf(" %c",&ch);
    int i=0;
    while(str[i])
    {
        if(str[i]==' ')
        {
            str[i]=ch;
        }
        i++;
    }
    printf("%s%c",str,ch);
}
