#include<stdio.h>
int main()
{
	int r_age,s_age,a_age;
	printf("enter the age of ram sham and ahan \n");
	scanf("%d %d %d",&a_age,&s_age,&a_age);
	if(r_age>s_age)
	printf("ram is bigger than sham");
	else if(s_age>a_age)
	printf("sham is bigger than ahan");
	else if(r_age>a_age)
	printf("ram is bigger than ahan");
	else
	printf("ram and sham and ahan age is equal");
	return 0;
}
