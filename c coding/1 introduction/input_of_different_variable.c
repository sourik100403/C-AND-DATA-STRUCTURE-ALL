# include<stdio.h>
int main()
{
	int num;
	float amount;
	double pi;
	long int ind_population;
	char ch;
	char msg[80];
	printf("enter the number :");
	scanf("%d",&num);
	printf("enter the amount :");
	scanf("%f",&amount);
	printf("enter the value of pi :");
	scanf("%e",&pi);
	printf("enter the population of india :");
	scanf("%1d",&ind_population);
	printf("enter the charecter :");
	scanf("%c",&ch);
	printf("enter the messege :");
	scanf("%s",&msg);
	
	
	printf("\n NUM=%d \n AMOUNT=%f \n PI=%e \n POPULATION OF INDIA=%1d \n CH=%c \n MESSEGE=%s",num,amount,pi,ind_population,
	ch,msg);
	return 0;
}
