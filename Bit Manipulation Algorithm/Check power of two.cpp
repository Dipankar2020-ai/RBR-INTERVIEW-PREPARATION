#include <iostream>

using namespace std;
void checkpoweroftwo(int n)
{
    if(n && !(n & (n-1)))
    {
        cout<<"It is power of two";
    }
    else
    {
        cout<<"It is not power of two";
    }
}
int main()
{
    int n;
    cin>>n;
    checkpoweroftwo(n);

    return 0;
}
