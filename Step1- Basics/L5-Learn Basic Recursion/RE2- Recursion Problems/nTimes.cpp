#include <bits/stdc++.h>
using namespace std;

void nT(int i, string s, int n)
{
    if (i > n)
        return;
    cout << s << endl;
    nT(i+1, s, n);
}

int main()
{
    int n = 10;
    nT(1, "sumit", n);
    return 0;
}