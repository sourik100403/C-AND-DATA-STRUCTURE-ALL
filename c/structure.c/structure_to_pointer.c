# include<stdio.h>
struct student
{
	int roll_no;
	char name[30];
	char branch[30];
    float fees;
};
int main()
{
	struct student *ptr_stud1;
	struct student stud1={01,"rahul","bba",60000};
	ptr_stud1=&stud1;
	printf("\n ***DETAILES OF STUDENT1***");
	printf("\ ROLL NO=%d", ptr_stud1->roll_no);
	printf("\n NAME=%s",ptr_stud1->name);
	printf("\n BRANCH = %s",ptr_stud1->branch);
    printf("\n FEES = %f",ptr_stud1->fees);
    return 0;
}

