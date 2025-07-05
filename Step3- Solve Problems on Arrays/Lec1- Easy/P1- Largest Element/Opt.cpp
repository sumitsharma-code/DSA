#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
    int num = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (num < arr[i])
            num = arr[i];
    }
    return num;
}

int main()
{
    int arr[6] = {15, 2, 67, 1, 8, 8};
    cout << largest(arr, 6);
    return 0;
}