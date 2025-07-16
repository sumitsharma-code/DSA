#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N = 5;
    int arr[N - 1] = {1, 2, 4, 5};
    for (int i = 1; i <= N; i++)
    {
        int flag = 0;
        for (int j = 0; j < N - 1; j++)
        {
            if(arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout << i;
            return 0;
        }
    }
    // cout << -1;
    return 0;
}