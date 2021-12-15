
#include <iostream>

using namespace std;
int getmaxdiff(int arr[],int n)
{
    int min_ele_sofar=arr[0];
    int max_ele_sofar=arr[1]-arr[0];
    int curr_diff=arr[1]-arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min_ele_sofar)
        {
            min_ele_sofar=arr[i];
        }
        else
        {
            curr_diff=arr[i]-min_ele_sofar;
            if(curr_diff>max_ele_sofar)
            {
             max_ele_sofar=curr_diff;
            }
        }
    }
    return max_ele_sofar;
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
    int ans=getmaxdiff(arr,n);
    cout<<ans;

    return 0;
}
