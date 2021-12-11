
#include <iostream>

using namespace std;
void kthset(int n,int k)
{
    if(n&(1<<(k-1)))
    {
        cout<<"Set";
    }
    else
    {
        cout<<"Not set";
    }
}

int main()
{
    int n=7,k=3;
    kthset(n,k);

    return 0;
}
