#include<stdio.h>
#include<string.h>
int main()
{
	char masterlist[6][20]={"akshay","parag","raman","srinivas","gopal","rasesh"};
	int i;
	char yourname[20];
	printf("enter your name");
	scanf("%s",yourname);
	for(i=0;i<5;i++)
	{
		if(strcmp(&masterlist[i][0],yourname)==0)
		{
			printf("wellcome you can enter the places\n");
			return 0;
		}
	}
	printf("sorry you are a trespasser");
	return 0;
}

