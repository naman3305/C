// You are using GCC
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char str[10][50],temp[50];
    for(i=0;i<n;++i)
    {
        scanf("%s[^\n]",str[i]);
    }
    for(i=0;i<n;++i)
        for(j=i+1;j<n;++j)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    for(i=0;i<n;++i)
    {
        puts(str[i]);
    }
    return 0;
}
