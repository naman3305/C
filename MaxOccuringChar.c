#include<stdio.h>
#include<string.h>
int main()
{
    int c=0,j,x,l=0,w;
    char s[100];
    scanf("%[^\n]s",s);
    int i=0;
    while(s[i])
    {
        j=0,c=0;
        while(s[j])
        {
           if(s[i]==s[j])
           {
               c++;
               x=s[i];
           }
           j++;
        }
        if(c>l)
        {
            l=c;
            w=x;
        }
        i++;
    }
    printf("'%c' appears number of times : %d",w,l);

}
