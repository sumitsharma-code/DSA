#include <bits/stdc++.h>
using namespace std;

int occurance(int arr[], int n, int s)
{
    int count = 0;
    for (int i = 0; i < s; i++)
    {
        if (arr[i] == n)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    int s = sizeof(arr) / sizeof(arr[0]);
    int n;
    cin >> n;
    cout << occurance(arr, n, s);
    return 0;
}