#include <bits/stdc++.h>
using namespace std;

bool isArm(int n)
{
    int temp = n;
    int ans = 0;
    while(temp!=0)
    {
        ans += (temp%10)*(temp%10)*(temp%10);
        temp/=10;
    }
    // cout << ans;
    if(ans == n)
    {
        return true;
    }
    return false;
}

int main() {
    int n = 2;
    cout << isArm(n);
    return 0;
}