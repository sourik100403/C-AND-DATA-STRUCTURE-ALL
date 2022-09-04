#include<stdio.h>
#include<string.h>
union student
{
	int id;
	float markes;
	char name[60];
};
int main()
{
	union student s1;
	s1.id=1;
	//s1.markes=68.00;
	strcpy(s1.name,"harry");
	s1.markes=68.00;
	printf("the id of s1 is %d\n",s1.id);
	printf("the markes of s1 is %0.2f\n",s1.markes);
	printf("the name of s1 is %s\n",s1.name);
	return 0;
}
