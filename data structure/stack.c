#include<stdio.h>
#include<stdlib.h>
#define max 5
int stack[max],top=-1;
void push();
void pop();
void display();
int main( )
{
    int n,p;
while(1)
    {
	
	printf("Enter-> \n1 to push \n2 to pop \n3 to display\n4 to exit\n");
	scanf("%d",&n);
        switch(n)
        {
            case 1:

push();
                break;

            case 2:

pop();
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

void push()
{
int x ;
    if(top==max-1)
    {
printf("\n\tSTACK is over flow");

    }
    else
    {
printf(" Enter a value to be pushed:");
scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
	int p;
    if(top==-1)
    {
printf("\n\t Stack is under flow");
    }
    else
    {
        p=stack[top];
        top--;

    }
printf("pop valu is %d",p);
}
void display()
{ 
int i;
for(i=top; i>=0; i--)
printf("\n %d ",stack[i]);


}

