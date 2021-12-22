#include <iostream>

using namespace std;
int equilibrium(int arr[],int n)
{
    int i=0,sum=0,sum1=0;
    while(i<n)
    {
        sum=0;
        sum1=0;
        for(int j=0;j<=i;j++)
        {
            sum=sum+arr[j];
        }
        for(int j=i+1;j<n;j++)
        {
            sum1=sum1+arr[j];
        }
      // cout<<sum<<" "<<sum1<<" "<<i<<endl;
        if(sum==sum1)
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    return -1;
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
    int ans=equilibrium(arr,n);
    if(ans==-1)
    {
        cout<<"There is no equilibrium index is present !!!";
    }
    else
    {
        cout<<"The equilibrium index is at : "<<ans<<endl;
    }

    return 0;
}
