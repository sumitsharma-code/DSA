#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && (arr[j] < arr[j - 1]))
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arr[7] = {14, 9, 15, 12, 6, 8, 13};
    insertionSort(arr, 7);
    cout << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}