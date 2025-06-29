#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int temp[high - low + 1];
    int i = low;
    int j = mid + 1;
    int k = 0;
    while (i <= mid && j <= high)
    {
        if (arr[i] > arr[j])
        {
            temp[k++] = arr[j++];
        }
        else
        {
            temp[k++] = arr[i++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= high)
    {
        temp[k++] = arr[j++];
    }
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[5] = {3, 2, 4, 1, 3};
    mergeSort(arr, 0, (4));
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}