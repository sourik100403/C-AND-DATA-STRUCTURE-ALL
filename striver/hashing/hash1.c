#include<stdio.h>
int main()
{
    //create arr
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    //precompute by hasharr
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;

    }
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int number;
        scanf("%d",number);
        printf("%d ",hash[number]);
    }
}