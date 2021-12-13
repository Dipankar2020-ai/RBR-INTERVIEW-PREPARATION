#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cout<<"Next higher of a given number which is power of 2 is :"<<pow(2,floor(log2(n)+1))<<endl;

    return 0;
}
