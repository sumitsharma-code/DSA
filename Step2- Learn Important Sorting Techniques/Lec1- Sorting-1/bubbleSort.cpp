#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool didSwap;
    for (int i = 0; i < n - 1; i++)
    {
        didSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = true;
            }
        }
        if (!didSwap)
        {
            cout << "no need" << endl;
            return;
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 4, 6, 9, 8};
    bubbleSort(arr, 6);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}