#include<stdio.h>
#include<string.h>
struct student{
	char name[60];
	int roll;
	char fav_char;
	int markes;
}sourik,smritikana;
int main()
{
	sourik.fav_char='s';
	sourik.markes=591;
	strcpy(sourik.name,"sourik");
	sourik.roll=01;
	smritikana.fav_char='m';
	smritikana.markes=612;
	strcpy(smritikana.name,"smritikana");
	smritikana.roll=02;
	printf("sourik favourite charecter=%c\n",sourik.fav_char);
	printf("sourik total markes =%d \n",sourik.markes);
	printf("sourik name =%s \n",sourik.name);
	printf("sourik roll no =%d \n",sourik.roll);
	//smritikan data store 
	printf("smritikana favourite charecter=%c \n",smritikana.fav_char);
	printf("smritikana total markes =%d \n",smritikana.markes);
	printf("smritikana name =%s \n",smritikana.name);
	printf("smritikana roll no =%d \n",smritikana.roll);
	return 0;
}
