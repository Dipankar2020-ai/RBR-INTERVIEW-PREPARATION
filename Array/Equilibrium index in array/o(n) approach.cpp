#include <iostream>

using namespace std;
int equilibrium(int arr[],int n)
{
    int left[n]={0};
    int right[n]={0};
    int sum=arr[0],i=1,j=n-2,sum1=arr[n-1];
    left[0]=arr[0];
    right[n-1]=arr[n-1];
    while(i<n)
    {
       left[i]=sum+arr[i];
       sum=sum+arr[i];
       i++;
    }
    while(j>=0)
    {
        right[j]=sum1+arr[j];
        sum1=sum1+arr[j];
        j--;
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<left[i]<<" "<<right[i]<<" "<<endl;
    }*/
    for(int i=0;i<n-1;i++)
    {
        if(left[i]==right[i+1])
        {
            return i;
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
