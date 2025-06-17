#include <bits/stdc++.h>
using namespace std;

void store(int arr[], int n, int hash[], int m)
{
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
}
void fetch(int arr[], int n, int hash[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << i << " is " << hash[i] << " times." << endl;
    }
}

int main()
{
    int arr[5] = {1, 2, 1, 3, 2};
    int hash[4] = {0};
    store(arr, 5, hash, 4);
    fetch(arr, 5, hash, 4);

    return 0;
}