#include<stdio.h>
void removeSpaces(char *str) ;
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    removeSpaces(str);
}
void removeSpaces(char *str)
{
    char str1[100];
    int i=0,j=0;
    while(str[i])
    {
        if(str[i]!=' ')
        {
            str1[j]=str[i];
            j++;
        }
        i++;
    }
    printf("%s",str1);
    }
