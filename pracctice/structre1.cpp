#include<stdio.h>
#include<string.h>
typedef struct employee{
	int code;
	float salary;
	char name[60];
}emp1;
void show(emp1 emp){
	printf("employee code :%d",emp.code);
	printf("employee salary:%f",emp.salary);
	printf("employee name:%c",emp.name);
}
int main()
{
	emp1 e2;
	emp1 *ptr;
	ptr=&e2;
	ptr->code=101;
	ptr->salary=190000;
	strcpy(ptr->name,"sourik parui");
	return 0;
}
