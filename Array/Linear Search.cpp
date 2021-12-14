#include <iostream>

using namespace std;
bool search(int arr[],int n,int target)
{
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
        {
            flag=true;
            return flag;
        }
    }
    return flag;
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
    int target;
    cin>>target;
    if(search(arr,n,target))
    {
        cout<<"The target is present in array";
    }
    else
    {
        cout<<"The target is not present in array";
    }

    return 0;
}
