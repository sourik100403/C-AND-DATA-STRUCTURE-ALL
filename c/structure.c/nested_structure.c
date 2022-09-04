# include<stdio.h>
int main()
{
	struct dob
	{
		int day;
		int month;
		int year;
	};
	struct student
	{
		int roll_no;
		char name[30];
		float fees;
		struct dob date;
	};
	struct student stud1;
	printf("\n enter the roll number : ");
	scanf("\n %d", &stud1.roll_no);
	printf("\n enter the name :");
	scanf("\n %s",stud1.name);
	printf("\n enter the fees :");
	scanf("\n %f", &stud1.fees);
	printf("\n enter the date of barth :");
	scanf("\n %d %d %d", &stud1.date.day,&stud1.date.month,&stud1.date.year);
	printf("\n *****STUDENTS DETAILES******");
	printf("\n ROLL NO =%d",stud1.roll_no);
	printf("\n NAME=%s", stud1.name);
	printf("\n FEES=%f", stud1.fees);
	printf("\n DOB =%d-%d-%d",stud1.date.day,stud1.date.month,stud1.date.year);
	return 0;
}
