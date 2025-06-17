#include <bits/stdc++.h>
using namespace std;

void store(string s, int arr[], int n)
{
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]]++;
    }
}

void fetch(int arr[])
{
    for (int i = 1; i < 257; i++)
    {
        cout << (char)(i) << " is " << arr[i] << endl;
    }
}

int main()
{
    string s = "abcdabef@c";
    int arr[257] = {0};
    store(s, arr, 257);
    fetch(arr);
    return 0;
}