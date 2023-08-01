#include<stdio.h>
int main()
{
    int arr[]={1,2,1,1,5,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",n);
    float sum=0;
    float avg;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];

    }
    // printf("%f \n",sum);
    avg=sum/n;
    printf("%0.2f ",avg);

}