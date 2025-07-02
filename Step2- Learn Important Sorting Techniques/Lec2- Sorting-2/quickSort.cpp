#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int low, int high)
{
    int piv = arr[low];
    int i = low;
    int j = high;
    while (i < j)
    {
        while (piv >= arr[i] && i <= high - 1)
        {
            i++;
        }
        while (piv < arr[j] && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = f(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

int main()
{
    int arr[8] = {4, 6, 2, 5, 7, 9, 1, 3};
    quickSort(arr, 0, 7);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}