# include<stdio.h>
int main()
{
	struct student
	{
		int roll_no;
		char name[20];
		float fees;
		char dob[40];
	};
	struct student stud1;
	printf("\n enter the roll number : ");
	scanf("\n %d", &stud1.roll_no);
	printf("\n enter the name :");
	scanf("\n %s", stud1.name);
	printf("\n enter the fees :");
	scanf("\n %f", &stud1.fees);
	printf("\n enter the DOB :");
	scanf("\n %s", stud1.dob);
	printf("\n *****students details *****");
	printf("\n ROLL NO = %d",stud1.roll_no);
	printf("\n NAME =%s", stud1.name);
	printf("\n FEES=%f", &stud1.fees);
	printf("\n DOB =%s", stud1.dob);
	return 0;
}
