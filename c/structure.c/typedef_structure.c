# include<stdio.h>
int main()
{
	typedef struct point
	{
		int x,y;
	}point;
	point p1,p2;
	float distance;
	printf("\n enter the coordinates of the first number :");
	scanf("\n %D %d", &p1.x,&p1.y );
    printf("\n enter the coordinates of the second number :");
    scanf("\n %d %d", &p2.x, &p2.y);
    distance=sqrt(pow((p1.x-p2.x),2)+ pow((p1.y-p2.y),2));
    printf("\n the coordinates of first point are : %dx %dy",p1.x,p1.y);
    printf("\n the coordinates of second point are : %dx %dy", p2.x,p2.y);
    printf("\n distance between p1 and p2=%f",distance);
    return 0;
}
