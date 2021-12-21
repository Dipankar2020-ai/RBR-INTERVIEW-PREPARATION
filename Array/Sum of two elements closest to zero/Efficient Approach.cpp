#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool compare(int x,int y)
{
    return abs(x)<abs(y);
}
void findMinSum(int arr[],int n)
{
    sort(arr,arr+n,compare);
    int min=INT_MAX,x,y;
    for(int i=1;i<n;i++)
    {
        if(abs(arr[i-1]+arr[i])<=min)
        {
            min=abs(arr[i-1]+arr[i]);
            x=i-1;
            y=i;
        }
    }
    cout<<"The two elements are "<<arr[x]<<" and "<<arr[y];
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findMinSum(arr,n);
    return 0;
}
