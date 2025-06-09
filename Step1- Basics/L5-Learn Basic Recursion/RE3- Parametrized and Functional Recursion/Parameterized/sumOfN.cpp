#include <bits/stdc++.h>
using namespace std;

int f(int i, int s)
{
    if(i < 1)   
        return s;
    return f(i-1,s+i); //here
}

int main() {
    int n = 5;
    cout << f(n,0);
    return 0;
}