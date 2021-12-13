#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n%4==0)
    {
        n=n/4;
        
    }
    if(n==1)
    {
        cout<<"The number is power of 4";
    }
    else
    {
        cout<<"The number is not power of 4";
    }

    return 0;
}
