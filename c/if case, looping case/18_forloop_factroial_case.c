
#include<math.h>
int main()
{
	int n,fact,i;
	clrscr();
	printf("\n enter any n");
	scanf("%d", &n);
	fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("\n %d is factorial", fact);
	return 0;
}
