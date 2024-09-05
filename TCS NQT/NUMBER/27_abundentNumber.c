#include<stdio.h>
int isAbundent(int n){
    int sum=0;
    for(int i=1;i<=n/2;i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
    }
    if(sum>n)
    printf("yes abundent");
    else
    printf("not abundent");
}
int main()
{
    int n=21;
    isAbundent(n);
}