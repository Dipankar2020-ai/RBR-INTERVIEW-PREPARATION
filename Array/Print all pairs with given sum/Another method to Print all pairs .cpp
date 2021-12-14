#include <bits/stdc++.h>
using namespace std;
void findpair(int arr[],int n,int target)
{
   sort(arr,arr+n);
   int i=0;
   int j=n-1;
   while(i<j)
   {
       if(arr[i]+arr[j]==target)
       {
           printf("pair with given sum %d is of (%d and %d)\n",target,arr[i],arr[j]);
           i++;
           j--;
       }
       if(arr[i]+arr[j]>target)
       {
           j--;
       }
       if(arr[i]+arr[j]<target)
       {
           i++;
       }
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
