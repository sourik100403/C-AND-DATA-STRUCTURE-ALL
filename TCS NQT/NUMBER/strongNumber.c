#include <stdio.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
        return n * fact(n - 1);
}
int strongNumber(int n)
{
    int num = n;
    int d;
    int rev=0;
    while (n != 0)
    {
        d = n % 10;
        rev = rev + fact(d);
        n = n / 10;
    }
  
    if (num == rev)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n = 26;
    int result = strongNumber(n);
    if (result == 1)
        printf("yes");
    else
        printf("no");
    return 0;
}