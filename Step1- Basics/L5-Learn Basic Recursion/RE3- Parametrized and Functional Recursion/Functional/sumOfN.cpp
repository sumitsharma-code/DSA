#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
    if(n < 1) return 0;
    return n + f(n-1);
}

int main() {
    int n = 5;
    cout << f(n);
    return 0;
}