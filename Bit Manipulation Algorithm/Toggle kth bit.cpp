#include<iostream>
using namespace std;
int toggleKthBit(int n, int k)
{
    return ((1 << k) ^ n);
}
int main()
{
    int n = 10, k = 0;
    printf("Kth bit set number = %d",toggleKthBit(n, k));
    return 0;
}
