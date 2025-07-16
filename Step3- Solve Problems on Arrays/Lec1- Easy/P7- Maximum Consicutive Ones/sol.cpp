#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1, 1, 0, 1, 1, 1, 0, 1, 1};

    int count = 0;
    int max = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            if (max < count)
            {
                max = count;
            }
        }
        else
        {
            count = 0;
        }
    }
    cout << max;
    return 0;
}