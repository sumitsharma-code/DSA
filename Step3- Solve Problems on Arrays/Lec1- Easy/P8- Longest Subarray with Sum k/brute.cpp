#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = 10;
    int key = 3;
    int len = 0;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == key)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    cout << len;
    return 0;
}