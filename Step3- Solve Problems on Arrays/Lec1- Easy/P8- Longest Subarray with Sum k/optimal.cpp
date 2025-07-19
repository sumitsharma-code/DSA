#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int key = 6;
    int n = arr.size();
    int sum = 0;
    int len = 0;
    int right = 0, left = 0;
    while (right < n)
    {
        sum += arr[right];
        if (sum > key)
        {
            sum = sum - arr[left];
            left++;
        }
        else if (sum == key)
        {
            len = max(len, right - left + 1);
        }
        right++;
    }
    cout << endl;
    cout << len;
    return 0;
}