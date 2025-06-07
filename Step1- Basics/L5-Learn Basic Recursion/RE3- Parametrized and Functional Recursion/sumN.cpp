#include <bits/stdc++.h>
using namespace std;

int sumN(int i, int n, int s)
{
    if (i > n)
    {
        return s;
    }
    return sumN(i + 1, n, s+i);
}

int main()
{
    int n = 5;
    cout << sumN(1, n, 0);
    return 0;
}