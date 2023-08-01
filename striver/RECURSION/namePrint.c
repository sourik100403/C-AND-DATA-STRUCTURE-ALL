#include<stdio.h>

int print(int i,int num)
{
    if(i>num)
    return 0;
    printf("sourik \n");
    print(i+1,num);
}
int main()
{
    int n=4;
    print(1,n);
    return 0;
}