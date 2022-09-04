#include<stdio.h>
#include<string.h>
struct student
{
	int id;
	char fav_char;
	int markes;
	char name[50];
}ravi,harry;
int main()
{
	//struct student harry,ravi;
	harry.id=1;
	ravi.id=2;
	harry.markes=99;
	ravi.markes=98;
	harry.fav_char='r';
	ravi.fav_char='i';
	strcpy(harry.name,"harry potter");
	printf("the id of harry is %d\n",harry.id);
	printf("the id of ravi is %d\n",ravi.id);
	printf("the markes of harry is %d\n",harry.markes);
	printf("the markes of ravi is %d\n",ravi.markes);
	printf("the faviorite charecter of harry is %c\n",harry.fav_char);
	printf("the faviorite charecter of ravi is %c\n",ravi.fav_char);
	printf("harry full name is %s\n",harry.name);
    return 0;
}
