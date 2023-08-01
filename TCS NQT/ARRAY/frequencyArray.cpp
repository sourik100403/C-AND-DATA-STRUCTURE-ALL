#include<bits/stdc++.h>
using namespace std;
int frequency(int arr[],int n)
{
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    for(auto x:map)
    {
        cout<<x.first<<"->"<<x.second<<endl;
    }
}
int main()
{
    int arr[]={21,223,13,21,223};
    int n=sizeof(arr)/sizeof(arr[0]);
    frequency(arr,n);
    return 0;
}