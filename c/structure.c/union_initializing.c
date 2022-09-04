# include<stdio.h>
struct point1
{
	int x,y;
};
union point2
{
	int x;
	int y;
};
int main()
{
	struct point1 p1={2,3};
	union point2 p2;
	p2.x=4;
	p2.y=5;
	printf("\n the co ordinates of p1 are %d %d",p1.x,p1.y);
	printf("\n the co ordinates of p2 are %d %d",p2.x,p2.y);
	return 0;
}
