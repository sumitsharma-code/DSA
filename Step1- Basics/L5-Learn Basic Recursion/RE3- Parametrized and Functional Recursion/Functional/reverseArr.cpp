#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int l, int r)
{
    if(l > r) return;
    swap(arr[l], arr[r]);
    rev(arr, l + 1, r - 1);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    rev(arr, 0, (sizeof(arr) / sizeof(arr[0]))-1);
    for(auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}