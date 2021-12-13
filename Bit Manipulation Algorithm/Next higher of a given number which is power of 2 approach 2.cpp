#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        n=n>>1;
        count++;
    }
    cout<<"Next number which is power of 2 is :"<<(1<<count)<<endl;
    return 0;
}
