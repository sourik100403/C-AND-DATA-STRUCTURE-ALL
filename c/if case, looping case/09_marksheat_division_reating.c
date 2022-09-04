# include<stdio.h>
int main()
{
	int markes;
	printf("\n enter any markes obtained");
	scanf("%d",&markes);
	if(markes>=75)
	printf("\n distinction");
	else if(markes>=60 && markes<75)
	printf("\n FIRST DIVISION");
	else if (markes>=50 && markes<60)
	printf("\n SECOND DIVISION");
	else if(markes>=40  && markes<50)
	printf("\n THIRD DIVISION");
	else
	printf("\n FAIL");
	return 0;
}
