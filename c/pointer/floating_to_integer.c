# include<stdio.h>
int main()
{
	float fnum,*pfnum=&fnum;
	int num, *pnum=&num;
	printf("\n enter the floating point number");
	scanf("\n %f", &fnum);
	*pnum=(int)*pfnum;
	printf("\n the integer eqivalent of %.2f=%d", *pfnum,*pnum);
	return 0;
}
