#include <stdio.h>
#include <string.h>
void count(char *str);
int main()
{

	char str[100];
	fgets(str,sizeof str,stdin);
count(str);
return 0;
}
void count(char *str)
{
int ctr=0,i,freq=0;
        int t,h,e,spc;
        ctr=strlen(str);

	/*Counts the frequency of the word 'the' with a trailing space*/
	for(i=0;i<=ctr-3;i++)
	{
		t=(str[i]=='t'||str[i]=='T');
		h=(str[i+1]=='h'||str[i+1]=='H');
		e=(str[i+2]=='e'||str[i+2]=='E');
		spc=(str[i+3]==' '||str[i+3]=='\0');
		if ((t&&h&&e&&spc)==1)
		   freq++;
	}
	printf("%d",freq);


}
