#include<stdio.h>
// int hcf(int a,int b)
// {
//     if(b!=0){
//         return hcf(b,a%b);
//     }
//     else{
//         return a;
//     }
// }
int main()
{
    int n1=10,n2=60;
    int gcd=1;
    // printf("%d",hcf(n1,n2));
    // return 0;

    //method 2

    int min;
    if(n1>n2){
        min=n2;
    }
    else{
        min=n1;
    }
    for(int i=1;i<=min;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
    printf("gcd is %d",gcd);
    return 0;
}