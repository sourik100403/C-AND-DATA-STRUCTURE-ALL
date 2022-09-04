# include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *ptr;
	char name[80];
	int roll_no;
	ptr=fopen("student", "r");
	if(ptr==NULL)
	{
		printf("\n this file could not be open");
		exit(0);
	}
	printf("\n enter the name and roll number of the student :");
	fscanf(ptr,"%s %d",name,&roll_no);
	printf("name : %s \t roll number : %d", name,roll_no);
	fscanf(ptr,"%s %d",name ,&roll_no);
	printf("\n name :%s \t roll number : %d",name,roll_no);
	fclose(ptr);
	return 0;
}
