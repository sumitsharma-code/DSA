#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

int main()
{
    int arr[6] = {1, 2, 44, 3, 3, 4};
    
    if(isSorted(arr, 6))
    {
        cout << "Sorted";
    }
    else
    {
        cout << "not Sorted";
    }
    return 0;
}