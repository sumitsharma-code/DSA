#include <bits/stdc++.h>
using namespace std;

void store(string s, int arr[], int n)
{
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a' + 1]++;
    }
}

void fetch(int arr[])
{
    for (int i = 1; i < 27; i++)
    {
        cout << (char)('a' + i - 1) << " is " << arr[i] << endl;
    }
}

int main()
{
    string s = "abcdabefc";
    int arr[27] = {0};
    store(s, arr, 27);
    fetch(arr);
    return 0;
}