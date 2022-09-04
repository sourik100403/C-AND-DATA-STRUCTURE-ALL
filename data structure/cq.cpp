#include<stdio.h>
#include<stdlib.h>
#define max 4
int cq[max],f=-1,r=-1;
void insert();
void del();
void display();
int main( )
{
    int n;
while(1)
    {
	
	printf(" Enter-> \n 1 to insert \n 2 to del \n 3 to display\n 4 to exit\n");
	scanf("%d",&n);
        switch(n)
        {
            case 1:

insert();
                break;

            case 2:

del();
                break;

            case 3:

display();
                break;

            case 4:

printf("\n\t EXIT POINT ");
                break;

            default:

printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");


        }
    }
}
void insert(void)
{
	int n;
	if((f==0 && r==max-1)||(f==r+1))
	printf("overflow");
	else if(f==-1 && r==-1)
	{
		f=(f+1)%max;
		r=(r+1)%max;
		printf("enter the value::\n");
		scanf("%d",&n);
		cq[r]=n;
	}
	else
	{
		r=(r+1)%max;
		printf("enter the value::\n");
		scanf("%d",&n);
		cq[r]=n;
	}
}

void del(void)
{
	int m;
	if(f==-1)
	printf("underflow\n");
	else if(f==r)
	{
		m=cq[r];
		f=-1;
		r=-1;
	}
	else
	{
		m=cq[f];
		f=(f+1)%max;
	}
}

void display(void)
{
	int i;
	if(f<=r)
	{
		for(i=f;i<=r;i++)
		printf("%d\n",cq[i]);
	}
	else
	{
		for(i=f;i<=max-1;i++)
		printf("%d\n",cq[i]);
		for(i=0;i<=r;i++)
		printf("%d\n",cq[i]);
	}
}
