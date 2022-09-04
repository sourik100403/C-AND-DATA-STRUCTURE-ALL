# include<stdio.h>
int main()
{
	FILE *ptr;
	int ch,no_of_character=0,no_of_lines=1;
    printf("\n enter the filename :");	
	ptr=fopen("a.txt","r");
	if(ptr==NULL){
		printf("\n this file could not exit");
	}
	ch=fgetc(ptr);
	while(ch!=EOF){
		if(ch=='\n')
		no_of_character++;
		no_of_lines++;
		ch=fgetc(ptr);
	}
	if(no_of_character>0)
	printf("\n in the file %s, there are %d lines and %d characters",'a.txt','no_of_lines','no_of_charecters');
	else
	printf("\n the file is empty");
	close(ptr);
}
	
