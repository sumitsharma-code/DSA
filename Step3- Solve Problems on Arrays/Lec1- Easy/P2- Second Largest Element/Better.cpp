#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n)
{
    int largest = arr[0];
    int sLargest = -1; // assuming that there is no -ve number if there is then use (INT_MIN)
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
            largest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (sLargest < arr[i] && arr[i] != largest)
            sLargest = arr[i];
    }
    return sLargest;
}

int main()
{
    int arr[6] = {1, 2, 4, 7, 7, 55};
    cout << sLargest(arr, 6);
    return 0;
}