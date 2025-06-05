#include <bits/stdc++.h>
using namespace std;

int reverseNumber(int n)
{
    int ans = 0;
    while(n!=0)
    {
        int lastDig = n%10;
        ans = (ans*10) + lastDig;
        n/=10;
    }
    return ans;
}

bool isPalind(int n)
{
    if(n == reverseNumber(n))
    {
        return true;
    }
    return false;
}
int main()
{
    int n = 4514;
    cout << isPalind(n);
    
    return 0;
}