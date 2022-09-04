#include<stdio.h>
void func1(int arr[2][2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("the value of %d,%d is %d\n",i,j,arr[i][j]);
		}
	}
	return 0;
	
}
int main()
{
	int arr[2][2]={{12,13},{14,15}};
	func1(arr);
	return 0;
}
