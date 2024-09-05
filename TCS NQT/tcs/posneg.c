#include<stdio.h>
void posnegcheck(int n)
{
    if(n>0)
    {
        printf("%d is positive number",n);
    }
    else{
        printf("%d is negative number",n);
    }
}
int main()
{
    int n=-7;
    posnegcheck(n);
    return 0;

}