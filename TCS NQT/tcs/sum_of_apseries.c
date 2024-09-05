#include<stdio.h>
int sum_of_ap(float a,float d,int n)
{
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=a;
        a+=d;
    }
    return sum;
}
int main()
{
    float a=11.3,d=3;
    int n=7;
    // printf("sum=%d",sum_of_ap(a,d,n));
    float sum=(n/2.0)*(2.0*a+(n-1)*d);
    printf("sum=%d",sum);
    return 0;

}