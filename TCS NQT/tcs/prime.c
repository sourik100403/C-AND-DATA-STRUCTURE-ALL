// #include<stdio.h>
// int main()
// {
//     int n,m,flag=0;
//     printf("enter the number you want to check");
//     scanf("%d",&n);
//     m=n/2;
//     for(int i=2;i<=m;i++)
//     {
//         if(n%i==0){
//             printf("%d is not prime",n);
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("%d is prime number",n);

//     }
// }


//print first 100 prime number 

#include<stdio.h>
int checkprime(int num)
{
    if(num<2){
        return 0;
    }
    else{
        int x=num/2;
        for(int i=2;i<=x;i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    int e=1,f=100,count=0;
    for(int j=1;j<=100;j++)
    {
        if(checkprime(j)){
            printf("%d ",j);
            count++;
        }
    }
    printf("total prime number ia %d",count);
    return 0;

}