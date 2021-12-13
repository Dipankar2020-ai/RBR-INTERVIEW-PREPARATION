#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n>0)
    {
        n=n>>1;
        count=count+1;
    }
    if(count%2==1)
    {
        cout<<"The number is power of 4";
    }
    else
    {
        cout<<"The number is not power of 4";
    }

    return 0;
}
