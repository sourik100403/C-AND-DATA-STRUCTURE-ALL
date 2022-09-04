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
   return 0;
}
void insert()
{
	int n;
	if((f==0&&r==max-1)||(f==r+1))
	printf("over flow");
	else if (f==-1&&r==-1)
	{
		f=(f+1)%max;
		r=(r+1)%max;
		printf("enter a number");
		scanf("%d",&n);
		cq[r]=n;
	}
	else
	{
		r=(r+1)%max;
		printf("enter a number");
		scanf("%d",&n);
		cq[r]=n;
		
	}
	
}
void del()
{
	int p;
	if(f==-1)
	printf("under flow");
	else if(f==r)
	{
		p=cq[f];
		f=-1;
		r=-1;
		printf("del element is %d ",p);
	}
	else
	{
		p=cq[f];
		f=(f+1)%max;
		printf("del element is %d ",p);
	}
}
void display()
{
	int i;
	if (f<=r)
	{
		for(i=f;i<=r;i++)
		printf(" %d",cq[i]);
	}
	else
	{
		for(i=f;i<=max-1;i++)
		printf(" %d",cq[i]);
		for(i=0;i<=r;i++)
			printf(" %d",cq[i]);
		
		
	}
}

