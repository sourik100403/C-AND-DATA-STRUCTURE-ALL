# include<stdio.h>
int main()
{
	struct student
	{
	 int roll_no;
	 char name[60];
	 int fees;
	 char DOB[60];
    };
    struct student stud[50];
    int n,i;
    printf("\n enter the number of students :");
    scanf("\n %d", &n);
    for(i= 0;i<n;i++)
    {
    	printf("\n enter the roll number");
    	scanf("\n %d", &stud[i].roll_no);
    	printf("\n enter the name :");
    	gets(stud[i].name);
    	printf("\n enter the fees :");
    	scanf("\n %d", &stud[i].fees);
    	printf("\n enter the DOB :");
    	gets(stud[i].DOB);
	}
    for(i=0;i<n;i++)
    {
    	printf("\n *****student detailes %d*****",i+1);
    	printf("\n ROLL NO = %d",stud[i].name);
    	printf("\n NAME=%s",stud[i].name);
    	printf("\n FEES= %d",stud[i].fees);
    	printf("\n DOB =%s",stud[i].DOB);
	}
	getch();
	return 0;
};
