#include<Stdio.h>
int main()
{
    int arr[]={1,5,2,3,4,5,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array is : %d",sum);
    return 0;
}