#include<stdio.h>
int main()
{
    // int a=3;
    // printf("%u",&a);
    // printf("%d",a);
    // printf("%d",*(&a));
    // return 0;

    // int a=76;
    // int* ptra=&a;
    // printf("%x",&a);
    // printf("%d",*ptra);
    // printf("%p",*ptra);
    // printf("%p",&ptra);
    int i=3;
    int *j;
    j=&i;
    printf("%d",i);
    printf("%d",&i);
    printf("%d",j);
}