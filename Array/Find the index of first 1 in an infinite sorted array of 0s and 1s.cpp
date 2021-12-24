#include <iostream>

using namespace std;
int indexoffirstone(int arr[],int low,int high)
{
    int mid;
    while(low<=high)
    {
         mid=(low+high)/2;
        if(arr[mid]==1 && (mid==0 ||arr[mid-1]==0))
        {
            break;
        }
        else if(arr[mid]==1)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return mid;
    
}
int findmid(int arr[])
{
    int low=0,high=1;
    while(arr[high]==0)
    {
        low=high;
        high=2*high;
    }
    return indexoffirstone(arr,low,high);
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
    int ans=findmid(arr);
    cout<<ans<<endl;
    return 0;
}
