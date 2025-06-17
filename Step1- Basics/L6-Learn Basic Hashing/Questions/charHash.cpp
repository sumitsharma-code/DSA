#include <bits/stdc++.h>
using namespace std;

void store(string s, int arr[], int n)
{
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'a' + 1];
    }
}

int main()
{
    string s = "abcdabefc";
    int arr[27] = {0};
    store(s, arr, 27);
    return 0;
}