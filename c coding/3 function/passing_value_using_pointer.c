#include<stdio.h>
int func1(int* ptr)
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("the value of %d is %d\n",i,*(ptr+i));//ptr[i]
	}
	*(ptr+2)=767;
	return 0;
	
}
int main()
{
	int arr[]={12,13,14,15};
	func1(arr);
	func1(arr);
	
}
