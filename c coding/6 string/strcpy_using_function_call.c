#include<stdio.h>
void xstrcpy(char *,char *);
int main()
{
	char source[]="sourik",target[20];
	xstrcpy(target,source);
	printf("source string=%s\n",source);
	printf("target string=%s\n",target);
	return 0;
}
void xstrcpy(char *t,char *s)
{
	while(*s!='\0')
	{
		
		*t=*s;
		s++;
		t++;
	}
	*t='\0';
}
