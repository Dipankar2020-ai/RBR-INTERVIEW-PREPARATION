
Problem:
https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1#
Solution:
class Solution{   
public:
    void segregate0and1(int arr[], int n) {
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            arr[c]=0;
            c++;
        }
    }
    for(int i=c;i<n;i++)
    {
        arr[i]=1;
    }
    }
};
