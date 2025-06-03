#include <bits/stdc++.h>
using namespace std;

void extractDigits(int N)
{
    int temp = N; // good habit not to change the given data 
    while(temp!=0)
    {
        cout << temp%10 << endl;
        temp/=10;
    }
}

int main()
{
    int n = 7789;
    extractDigits(n);
    return 0;
}