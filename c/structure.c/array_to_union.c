# include<stdio.h>
union point
{
	int x;
	int y;
};
int main()
{
	int i;
	union point points[3];
	points[0].x=2;
	points[0].y=3;
	points[1].x=4;
	points[1].y=5;
	points[2].x=6;
	points[2].y=7;
	
	for(i=0;i<3;i++)
	printf("\n co odinates of points[%d] are %d %d",i,points[i].x,points[i].y);
	return 0;
}
