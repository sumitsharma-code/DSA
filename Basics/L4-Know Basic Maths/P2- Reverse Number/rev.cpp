#include <bits/stdc++.h>
using namespace std;

void reverseNumber(int n)
{
    int ans = 0;
    while(n!=0)
    {
        int lastDig = n%10;
        ans = (ans*10) + lastDig;
        n/=10;
    }
    cout << ans;
}
int main()
{
    int n = 4620;
    reverseNumber(n);
    return 0;
}