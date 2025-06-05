#include <bits/stdc++.h>
using namespace std;

int euclideanAlgo(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return max(a, b);
}

int main()
{
    int a = 20;
    int b = 15;
    cout << euclideanAlgo(a, b);
    return 0;
}