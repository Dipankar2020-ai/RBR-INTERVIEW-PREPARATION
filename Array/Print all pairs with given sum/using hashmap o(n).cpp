#include <bits/stdc++.h>
using namespace std;
void findpair(int arr[],int n,int target)
{
    unordered_map<int,int>m;
    bool flag=0;
    for(int i=0;i<n;i++)
    {
        int temp=target-arr[i];
        if(temp>=0 && m[temp]==1)
        {
            printf("Pair with given sum %d is of (%d and %d)\n",target,arr[i],temp);
            flag=1;
        }
        m[arr[i]]=1;
    }
    if(flag==0)
    {
        cout<<"No pair is present in the array\n";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int target;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>target;
    findpair(arr,n,target);
}
