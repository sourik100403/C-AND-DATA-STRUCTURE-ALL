# include<stdio.h>
# include<stdlib.h>
int main()
{
	int i;
	int *ptr;
	ptr=(int *) calloc(6,sizeof(int));
	for(i;i<6;i++){
		printf("\n enter value of %d element :", i);
		scanf("\n %d", &ptr[i]);
	}
	for(i;i<6;i++){
		printf("\n the value of %d element is : %d", i,ptr[i]);
	}
	return 0;
}
	
