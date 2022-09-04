#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],front=-1,rear=-1;
void insert();
void del();
void display();
int main( )
{
    int n;
while(1)
    {
	
	printf("\n Enter-> \n 1 to insert \n 2 to del \n 3 to display\n 4 to exit\n");
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
exit(0);

            default:

printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");


        }
    }
   return 0;
}

void insert()
{
int x ;
    if(rear==max-1)
    {
printf(" queue is over flow\n");
    } 
    else if(front==-1&&rear==-1)
    {
	front++;
	rear++;
printf(" Enter a value to be insert:");
scanf("%d",&x);
        queue[rear]=x;
    }
    else
    {
	rear++;
	printf("enter a valu to be insert:");
	scanf("%d",&x);
	queue[rear]=x;
	}
}
void del()
{
	int p;
    if(front==-1)
    {
printf("\n\t queue is under flow");
    }
    else if(front==rear)
    { 
        p=queue[front];
        front=-1;
       rear=-1;
printf("the del element is %d",p);
    }

    else 
    {  
	p=queue[front];
        front++;
printf("the del element is %d",p);

	}
	


}
void display()
{ int i;
for(i=front; i<=rear; i++)
printf("%d ",queue[i]);

}



