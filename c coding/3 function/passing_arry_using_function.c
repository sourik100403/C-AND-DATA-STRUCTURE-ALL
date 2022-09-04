#include<stdio.h>
int func1(int arry[])
{
int i;
for(i=0;i<4;i++)
{
	printf("the value of %d index is %d\n",i,arry[i]);
}
arry[0]=565;
return 0;

}
int main()
{
	int arr[]={13,14,15,16};
	//printf("the value of 0 index is %d\n",arr[0]);
	func1(arr);
	func1(arr);
	//printf("the value of 0 index is %d\n",arr[0]);
	return 0;
}
