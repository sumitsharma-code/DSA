#include <bits/stdc++.h>
using namespace std;

int uniqueElement(int arr[], int n)
{
    int i = 0;
    int j = 1;

    for(; j < n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    int arr[7] = {1, 1, 2, 2, 2, 3, 3};
    cout << uniqueElement(arr, 7) << endl;
    for(auto i:arr)
    {
        cout << i << " ";
    }
    return 0;
}