#include<stdio.h>
#include<stdlib.h>
#define Max 5
void push(void);
int pop(void);
void display(void);
int stack[Max],top=-1;
int main()
{
	int n,p;
	while(1)
	{
		printf("\n Enter your choice>>>>>>>>\n 1 for push\n 2 for pop \n 3 for display \n 4 for exit\n");
		scanf("%d",&n);
		switch(n){
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(0);
			default:printf("please enter 1 to 4 any chice");
		}
	}	
}
void push(void){
	int m;
	if(top==Max-1)
	printf("not possiable it is over flow condition");
	else{
		printf("enter the insert value \n");
		scanf("%d",&m);
		top++;
		stack[top]=m;
	}
}

int pop(void)
{
	int p;
	if(top==-1)
	printf("not possible because it is already empty");
	else{
		p=stack[top];
		top--;
	}
	printf("pop value is %d",p);
}
void display(void){
	int i;
	for(i=top;i>=0;i--)
	printf("%d\n",stack[i]);
}
