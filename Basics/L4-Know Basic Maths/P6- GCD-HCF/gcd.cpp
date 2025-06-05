#include <bits/stdc++.h>
using namespace std;

int gcd(int n1, int n2)
{
    if(n1 == n2)
    {
        return n1;
    }
    int ans = 0;
    int k;
    int l;
    if (n1 > n2)
    {
        k = n2;
        l = n1;
    }
    else
    {
        k = n1;
        l = n2;
    }
    if (l % k == 0)
    {
        return k;
    }
    for (int i = 1; i * i <= k; i++)
    {
        if(k%i == 0 && l%i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

//optimal
int gcdOpt(int n1, int n2)
{
    int ans = 1;
    for(int i = min(n1, n2); i >= 1; i--)
    {
        if(n1%i == 0 && n2%i == 0)
        {
            ans = i;
            return ans;
        }
    }
    return ans;
}

int main()
{
    int n1 = 12;
    int n2 = 9;
    cout << gcdOpt(n1, n2);
    return 0;
}