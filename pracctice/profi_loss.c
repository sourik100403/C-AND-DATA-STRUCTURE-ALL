# include<stdio.h>
int main()
{
	float cp,sp,p,i;
	printf("enter the cost price and selling price \n");
	scanf("%f %f",&cp,&sp);
	p=sp-cp;
	i=cp-sp;
	if(p>0)
	printf("the profit is %0.2f \n \a",p);
	else if(i>0)
	printf("the loss=%0.2f \n \a",i);
	else
	printf("no profit and no loss");
	return 0;
}
