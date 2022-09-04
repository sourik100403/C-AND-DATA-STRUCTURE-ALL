# include<stdio.h>
int main()
{
	int i,n,arr[20],small,pos;
	printf("\n enter the number of elements in the arry");
	scanf("%d", &n);
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	scanf("%d", &arr[i]);
	small=arr[0]; pos=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	printf("\n the smallest elements is : %d", small);
	printf("\n the position of the smallest element in the arry is: %d", pos);
	return 0;
}

