# include<stdio.h>
struct student 
{
	int roll_no;
	char name[30];
	int fees;
	char course[30];
};
int main()
{
	struct student stud1,stud2,*ptr_stud1,*ptr_stud2;
	ptr_stud1=&stud1;
	ptr_stud2=&stud2;
	ptr_stud1->roll_no=01;
	strcpy(ptr_stud1->name,"rahul");
	strcpy(ptr_stud1->course ,"b-tech");
	ptr_stud1->fees =45000;
	
	printf("\n enter the detailes of second student :");
	printf("\n enter the roll no :");
	scanf("\n %d", &ptr_stud2->roll_no);
	printf("\n enter the name = rohit ");
	gets(ptr_stud2->name);
	printf("\n enter the course = b-tech");
	gets(ptr_stud2->course);
	printf("\n enter the fees :");
	scanf("\n %d",ptr_stud2->fees);
	
	printf("\n ***detailes of first student***");
	printf("\n ROLL NO =%d", ptr_stud1->roll_no);
	printf("\n NAME =%s", ptr_stud1->name);
	printf("\n course =",ptr_stud1->course);
	printf("\n fees =",ptr_stud1->fees);
	
	printf("\n\n\n ***detailes of second student ***");
	printf("\n ROLL NO =%d", ptr_stud2->roll_no);
	printf("\n NAME =%s", ptr_stud2->name);
	printf("\n course =",ptr_stud2->course);
	printf("\n fees =",ptr_stud2->fees);
	
	return 0;
}
