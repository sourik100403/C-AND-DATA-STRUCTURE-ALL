#include<stdio.h>
float sumofAp(float a, float d, int n)
{
     float sum = (n / 2.0) * (2.0 * a + (n - 1) * d);
     return sum;

}
int main()
{
    float a = 4, d = 2, n = 2;
    printf("%d ",sumofAp(a,d,n));
    
}