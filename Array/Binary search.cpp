#include <iostream>

using namespace std;
bool search(int arr[],int n,int target)
{
   int start=0;
   int end=n-1;
  
   while(start<end)
   {
        int mid=(start+end)/2;
       if(arr[mid]>target)
       {
           end=mid-1;
       }
       else if(arr[mid]==target)
       {
           return true;
       }
       else if(arr[mid]<target)
       {
           start=mid+1;
       }
   }
   return false;
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
