#include <bits/stdc++.h>
using namespace std;

void selectSort(int arr[], int n)
{
    int index;
    for (int i = 0; i <= n - 2; i++)
    {
        index = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}

int main()
{
    int arr[6] = {13, 46, 24, 52, 20, 9};
    selectSort(arr, 6);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}