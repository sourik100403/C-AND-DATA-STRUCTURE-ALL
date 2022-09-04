#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]="jhgfhfghghg";
	int len1,len2;
	len1=strlen(arr);
	len2=strlen("umbrerrla");
	printf("string=%s length=%d\n",arr,len1);
	printf("string=%s length=%d\n","umbrerrla",len2);
	return 0;
}
