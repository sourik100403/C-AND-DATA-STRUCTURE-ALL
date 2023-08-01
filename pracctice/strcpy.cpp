#include<stdio.h>
void xstrcpy(char *,char *);
int main()
{
	char source[]="sourik",target[30];
	xstrcpy(target,source);
	printf("source=%s\n",source);
	printf("target=%s\n",target);
	return 0;
}
void xstrcpy(char *t,char *s)
{
	while(*s!='/0'){
		*t=*s,s++,t++;
	}
	*t='\0';
}
