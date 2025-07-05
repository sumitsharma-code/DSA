#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n)
{
    // {1, 2, 4, 7, 7, 5}
    int largest = arr[0]; // 1, 2, 4, 7, 7,
    int slargest = -1;    //-1, 1, 2, 4, 4, 5
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && slargest < arr[i])
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[6] = {4,4,4,4,4,4};
    cout << sLargest(arr, 6);
    return 0;
}