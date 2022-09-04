#include<stdio.h>
#include<stdlib.h>
int main()
{
	int* ptr;
	int n;
	int i;
	printf("the size of arry is you want to created\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("the value of %d of the arry\n",i);
		scanf("%d",&ptr[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("the value at %d of their arry is %d\n",i,ptr[i]);
    }
   // return 0;
    printf("enter the new arry size you want to crerated\n");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(i=0;i;i++)
    {
    	printf("the value of %d in the arry\n",i);
    	scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("the value at %d of the arry is %d\n",i,ptr[i]);
	}
	free(ptr);
	return 0;
}
