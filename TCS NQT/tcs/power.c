#include<Stdio.h>
int main()
{
    int a=5,b=3;
    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;

    }
    printf("%d is result",ans);
    return 0;
}