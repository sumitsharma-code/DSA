#include <bits/stdc++.h>
using namespace std;

int f(string s, int l, int r)
{
    if (l > r)
        return 1;
    if (s[l] != s[r])
        return -1;
    return f(s, l + 1, r - 1);
}

int main()
{
    string s = "sumgus";
    if (f(s, 0, s.length() - 1) == -1)
    {
        cout << "not a palindrome";
    }
    else
    {
        cout << "palindrome";
    }
    return 0;
}