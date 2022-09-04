#include<stdio.h>
typedef struct distance
{
	int kms;
	int meters;
}distance;
distance add_distance(distance,distance);
distance subtract_distance(distance,distance);
distance d1,d2,d3,d4;
int main()
{
	int option;
	do
	{
		printf("\n ****main menu****");
		printf("\n 1. read the distance");
		printf("\n 2. display the distance");
		printf("\n 3. add the distance");
		printf("\n 4. exit");
		printf("\n enter the option");
		scanf("\n %d", &option);
		switch(option)
		{
			case 1:
				printf("\n enter the first distance in kms and meters");
				scanf("\n %d %d", &d1.kms,&d1.meters);
				printf("\n enter the second distance in kms and meters");
				scanf("\n %d %d", &d2.kms,&d2.meters);
				break;
			case 2:
				printf("\n enter the first distance in kms and meters");
				scanf("\n %d %d", &d1.kms,&d1.meters);
				printf("\n enter the second distance in kms and meters");
				scanf("\n %d %d", &d2.kms,&d2.meters);
				break;
			case 3:
				d3=add_distance(d1,d2);
				printf("\n the sum of the two distance is : %d kms %d meters",d3.kms,d3.meters);
				break;
			case 4:
				d4=subtract_distance(d1,d2);
				printf("\n the subtract of two distance is : %d kms %d meters",d4.kms,d4.meters);
				break;
		}
	}
	while(option!=5);
	return 0;
}
distance add_distance(distance d1,distance d2)
{
	distance sum;
	sum.meters=d1.meters+d2.meters;
	sum.kms=d1.kms + d2.kms;
	if(sum.meters>=1000)
	{
		sum.meters=sum.meters%1000;
		sum.kms+=1;
	}
	return sum;
}
distance subtract_distance(distance d1,distance d2)
{
	distance sub;
	if(d1.kms>d2.kms)
	{
		sub.meters=d1.meters-d2.meters;
		sub.kms=d1.kms-d2.kms;
	}
	else
	{
		sub.meters=d2.meters-d1.meters;
		sub.kms=d2.kms-d1.kms;
	}
	if(sub.meters<0)
	{
      sub.kms=sub.kms-1;
      sub.meters=sub.meters+1000;
	}
	return sub;
}

