#include <bits/stdc++.h>
using namespace std;

void printAllDiv(int n)
{
    //n = 0
    if(n == 0)
    {
        cout << 0;
        return;
    }
    for(int i = 1; i <= n/2; i++)
    {
        if(n%i == 0)
        {
            cout << i << " ";
        }
    }
    cout << n;
}

void bestPrintAllDiv(int n)
{
    vector<int> v;
    for(int i = 1; i <= sqrt(n);i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            if(n/i != i)
            {
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(), v.end());
    for(auto i:v)
    {
        cout << i << " ";
    }
}

int main() {
    int n = 36;
    // printAllDiv(n);
    bestPrintAllDiv(n);
    return 0;
}