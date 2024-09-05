#include<stdio.h>
int isAutoMorphic(int n)
{
    int mul=n*n;
    //last two digit calculate of the multification
    while(n>0){
        if(mul%10 != n%10){
            return 0;//false
        }
        n=n/10;
        mul=mul/10;
    }
    return 1;//true
}
int main()
{
    int n=26;
    int res=isAutoMorphic(n);
    if(res==0)
    printf("no");
    else
    printf("yes");
    return 0;
}