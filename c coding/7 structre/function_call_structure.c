#include<stdio.h>
#include<string.h>
typedef struct employee
{
	int code;
	float salary;
	char name[60];
}emp1;
void show(/*struct employee*/emp1 emp)
{
printf("the code of empoloyee is: %d\n",emp.code);
printf("the salary of empoloyee is: %f\n",emp.salary);
printf("the name of empoloyee is: %s\n",emp.name);
}
int main()
{
	/*struct employee*/emp1 e1;
	/*struct employee*/emp1 *ptr;
	ptr=&e1;
	//(*ptr).code=101;
	ptr->code=101;
	ptr->salary=19999;
	strcpy(ptr->name,"harry");
	return 0;
	
}
