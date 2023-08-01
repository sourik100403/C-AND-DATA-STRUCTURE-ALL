#include<iostream>
#include<map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    map<int ,int> mapp;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
         mapp[arr[i]]++;
    }
    //precompute
    // map<int ,int> mapp;
    // for(int i=0;i<n;i++)
    // {
    //     mapp[arr[i]]++;
    // }

    //iter in the map
    for(auto it:mapp)
    {
        cout<<it.first<<"->"<<it.second<<endl;

    }


    // search
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<< mapp[number] <<endl;

    }

}
