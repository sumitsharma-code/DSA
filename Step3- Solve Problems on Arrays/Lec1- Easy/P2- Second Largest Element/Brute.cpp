#include <bits/stdc++.h>
using namespace std;
// sorting
int f(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

int largest(int arr[], int n)
{
    quickSort(arr, 0, n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[n - 1])
            return arr[i];
    }
    return -1;
}

int main()
{
    int arr[6] = {15, 2, 67, 104, 8, 8};
    cout << largest(arr, 6);
    return 0;
}

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
