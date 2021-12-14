
#include <iostream>

using namespace std;
int getMajorityElement(int arr[],int n)
{
    int count=1,majorityindex=0;
    for(int i=1;i<n;i++)
    {
        if(arr[majorityindex]==arr[i])
            count++;
        else
           count--;
        if(count==0)
        {
            majorityindex=i;
            count=1;
        }
    }
    return arr[majorityindex];
}
int isMajorityElement(int arr[],int size,int majorityelement)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==majorityelement)
        {
            count++;
        }
    }
    return (count>size/2)?1:0;
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
   int majorityelement=getMajorityElement(arr,n);
   isMajorityElement(arr,n,majorityelement)?printf("Majority Element is = %d", majorityelement) : printf("No majority Element");
    return 0;
}
