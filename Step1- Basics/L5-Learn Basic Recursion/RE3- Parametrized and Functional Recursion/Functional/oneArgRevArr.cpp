#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int n, int i)
{
    if (i > n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    rev(arr, n, i + 1);
}

int main()
{
    int arr[5] = {1, 4, 6, 65, 256};
    int n = 5;
    rev(arr, n, 0);
    for(auto i:arr) cout << i << " ";
    return 0;
}